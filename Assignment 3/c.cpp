/* 
Assignment 3 : page 143, problem 12
Name: Daymon Wu

Write  a  program  that  inputs  a  date  (e.g.,  July  4,  2008)  and  outputs  the  day  of  
the week that corresponds to that date. The following algorithm is from http://
en.wikipedia.org/wiki/Calculating_the_day_of_the_week.  The  implementation  
will require several functions

*/

#include <iostream>
using namespace std;

// The four functions below
bool isLeapYear(int year){ //Leap year
if ((year % 400 == 0)||(year % 4 == 0 && year % 100 != 0)){
    return true; //True if year is divisible by 400 or if divisible by 4 but not divisible by 100
}
    else{
        return false;
    }
}
int getCenturyValue(int year){ //takes first two digits of the year
double x = (year / 100) % 4; //then divide it by 4 and we save to remainder
int y = (3 - x) * 2; //subtract remainder from 3 and return the value and multipy by two
return y; //return the value
}
int getYearValue(int year){ //value based on the last two digits of the year
    int a = (year % 100); //get last two divide by four and add the year again
    int b = (a/4) + a;// 8;
    return b;
}
int getMonthValue(int month, int year){
    if (month == 1){
        if (isLeapYear(year)) //jan determines leap year if is 6
        return 6;
        else return 0;
    }
    else if (month == 2){ //feburary determines leap year if is 
        if (isLeapYear(year))
        return 2;
        else return 3;       
    }
    if (month == 3){
        return 3;
    }
    if (month == 4){
        return 6;
    }
    if (month == 5){
        return 1;
    }
    if (month == 6){
        return 4;
    }
    if (month == 7){
        return 6;
    }
    if (month == 8){
        return 2;
    }
    if (month == 9){
        return 5;
    }
    if (month == 10){
        return 0;
    }
    if (month == 11){
        return 3;
    }
    if (month == 12){
        return 5;
    }
    return 0;
}
void Daay(int d){//daay cooresponds to weekday
    if (d == 0) cout << "Sunday"<< endl;
    else if (d == 1) cout << "Monday";
    else if (d == 2) cout << "Tuesday";
    else if (d == 3) cout << "Wednesday";
    else if (d == 4) cout << "Thursday";
    else if (d == 5) cout << "Friday";
    else if (d == 6) cout << "Saturday";
    }
int main( )
{
    int month, day, year;
    cout << "Enter month (1-12):" << endl;
    cin >> month;
    cout << "Enter day (1-31):" << endl;
    cin >> day;
    cout << "Enter year (0000-9999):" << endl;
    cin >> year;

    // To get the day, sum the values and compute the
    // remainder divided by 7
    int total;
    total = (day + getMonthValue(month, year) + getYearValue(year)
             + getCenturyValue(year));
/*    cout << "getMonthValue + getYearValue + getCenturyValue: "
         << getMonthValue(month, year) << "+" << getYearValue(year)
         << "+" << getCenturyValue(year) << endl;
    cout << "line 107: " << total << endl;
*/
    int d = total % 7;
    
    // Output the day of the week given a date
    cout << month << "/" << day << "/" << year << " is a ";
    Daay(d);


    return 0;
}