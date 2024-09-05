/* 
Assignment 1 : page 15, exercise 3
Name: Daymon Wu

Write a program that contains statements that output the values of five or
six variables that have been defined, but not initialized. Compile and run the
program. What is the output? Explain.

If we initalize the variable, that mean be give them a value lie "a = 0" the numbers would
be 0 or whatever we give them. But in this case when the variable is defined, storage for the named item
is allocated. Which results in the random numbers for the output.

*/


#include <iostream>
using namespace std;
int main(){
    
int a, b, c, d, e; //creating/define variable a-e
cout << a << b << c << d << e << endl; //output variables
return 0;
    
}