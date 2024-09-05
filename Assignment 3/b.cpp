/* 
Assignment 3 : page 142, problem 8
Name: Daymon Wu

Write a program that outputs all 99 stanzas of the “Ninety-Nine Bottles of Beer 
on the Wall” song. Your program should print the number of bottles in English, 
not as a number:  Ninety-nine bottles of beer on the wall,  Ninety-nine bottles 
of beer,  Take one down, pass it around,  Ninety-eight bottles of beer on the wall.  
...  One bottle of beer on the wall,  One bottle of beer,  Take one down, pass it around,  
Zero bottles of beer on the wall.  Your program should not use ninety-nine different 
output stateme
*/

#include <iostream>
#include <cstring>
using namespace std;
//string function to seperate the two digits tens and ones
string number(int n){
    int tens,ones;//first and last digit declaring
    string word= "" ;//word to return to void function
    switch(n){ //cases for teens (10-19)
        case 10: return("Ten ");
        case 11: return("Eleven ");
        case 12: return("Twelve ");
        case 13: return("Thirteen ");
        case 14: return("Fourteen ");
        case 15: return("Fifteen ");
        case 16: return("Sixteen ");
        case 17: return("Seventeen ");
        case 18: return("Eighteen ");
        case 19: return("Nineteen ");
        case 0:  return("Zero ");
    }

tens=n/10; //first digit
ones=n%10; //second digit

    switch(tens){ //first digit with case
        case 9: word = "Ninety "; break;
        case 8: word = "Eighty "; break;
        case 7: word = "Seventy "; break;
        case 6: word = "Sixty "; break;
        case 5: word = "Fifty "; break;
        case 4: word = "Forty "; break;
        case 3: word = "Thirty "; break;
        case 2: word = "Twenty "; break;
    }
    switch(ones){ //second digit with case
        case 1: word = word + "One "; break;
        case 2: word = word + "Two "; break;
        case 3: word = word + "Three "; break;
        case 4: word = word + "Four "; break;
        case 5: word = word + "Five "; break;
        case 6: word = word + "Six "; break;
        case 7: word = word + "Seven "; break;
        case 8: word = word + "Eight "; break;
        case 9: word = word + "Nine "; break;
    }
return word; //return word to void functiok

}

void line(int n){
    string word; //from string number function
    word = number(n);
    cout << word; //output 1-99
    if(n == 1) //if we are at the end of the program singular bottles
        cout << "bottle of beer on the wall," << endl;
    else 
        cout << "bottles of beer on the wall, " << endl;
        cout << word;
    if(n == 1)//if singular bootle
        cout << "bottle of beer, " << endl;
    else // if there are more bottles
        cout << "bottles of beer, " <<endl;
        cout<<"Take one down, pass it around,"<<endl;
        n--; //decrement bottles
        word = number(n);//new number word value
        cout << word; //output new word

    if(n == 1)//if singular bootle
        cout << "bottles of beer on the wall, \n" << endl;
        
    else //if there are more bottles
        cout<<"bottles of beer on the wall, \n"<< endl;
return;
}

int main(){
    int n = 99;//starting at 99 bottles

    while(n>0){ //while n is not 0 yet
        line(n); //go to line function and line function will go to string number function
        n--; //decrease n till while funtion has reached 0
    }

return 0;
}

