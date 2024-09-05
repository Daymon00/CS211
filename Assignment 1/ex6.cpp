/* 
Assignment 1 : page 24, exercise 6
Name: Daymon Wu

6. What is the output of the following program lines when they are embedded in a
correct program that declares number to be of type int?
number = (1/3) * 3;
cout << "(1/3) * 3 is equal to " << number;

Answer = 0
because 1/3 = 0 since it is an int and not a float
0 * 3 is 0
*/

#include <iostream>
using namespace std;
int main(){
int number = (1/3) * 3;
cout << "(1/3) * 3 is equal to " << number;
}