/* 
Assignment 2 : page 98, exercise 8
Name: Daymon Wu

Write a program that finds the temperature, as an integer, that is the same in both
Celsius and Fahrenheit. The formula to convert from Celsius to Fahrenheit is as
follows:
Fahrenheit = 9
5
 Celsius + 32
 Your program should create two integer variables for the temperature in Celsius
and Fahrenheit. Initialize the temperature to 100 degrees Celsius. In a loop, decrement the Celsius value and compute the corresponding temperature in Fahrenheit
until the two values are the same.

*/

#include<iostream>
using namespace std;
int main(){
int c = 100, f; //initialize c to 100 deg

while(true){ //loop
    f = 9 * c / 5 + 32; //formula for convert c to f
    if(c == f) break; //loop until this is true 
    c--; //count down till we get the same answer for c and f
    cout << c << endl; //show work
}
cout <<"Answer: " << c << endl;// this happens after the if statement when it breaks
return 0;
}