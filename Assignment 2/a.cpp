/* 
Assignment 2 : page 44, problem 6
Name: Daymon Wu

An employee is paid at a rate of $16.78 per hour for regular hours worked in a
week. Any hours over that are paid at the overtime rate of one and one-half times
that. From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is
withheld for federal income tax, 5% is withheld for state income tax, and $10 per
week is withheld for union dues. If the worker has three or more dependents, then
an additional $35 is withheld to cover the extra cost of health insurance beyond what
the employer pays. Write a program that will read in the number of hours worked in
a week and the number of dependents as input and that will then output the worker’s
gross pay, each withholding amount, and the net take-home pay for the week.
*/

#include <iostream>
using namespace std;

int main(){
const double rate = 16.78;    //rate doesnt change so it is a const
double hours = 0;   //variables that we need
double gross = 0;
double withholds = 0;
double netPay = 0;
double SST = 0.06;//social security tax
double FIT = 0.14;//federal income tax
double SIT = 0.05;//state income tax
double unionDues = 10.00;
double healthInsurance = 35.00;
double dependents = 0;

cout << "Enter the number of hours worked:" << endl;
cin >> hours; //get hours

cout << "Enter the number of dependents" << endl;
cin >> dependents; //get dependents

gross = hours * rate; //get raw amount
//if there is overtime gross will be overwritten
if (hours > 40){ //if over 40 there is overtime pay!
    double overtimeHours = hours - 40; //total hours of overtime
    double overtimePay = (rate * 1.5) * overtimeHours; //amount of money for overtime
    gross = overtimePay + gross; //if gross is over 40 then overwrite the gross from before
}

if (dependents > 2){ //if there are 3 or more dependents
    withholds = withholds + healthInsurance; //add 35 dollars to withholdings
}

withholds = (SST * gross) + withholds; //add social security tax to withholdings
withholds = (FIT * gross) + withholds; //add federal income tax to withholdings
withholds = (SIT * gross) + withholds; //add state income tax to withholdings
withholds += unionDues; // add union dues to withholds

cout << endl;

netPay = gross - withholds; //subtract withholds from gross for netpay
cout << "Gross Pay: $" << gross << endl;    //answers:
cout << "Withholds: $" << withholds << endl;
cout << "NetPay: $" << netPay << endl;
cout << endl;

return 0;
}