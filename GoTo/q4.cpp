// Write a program that will ask the user for their age. 
// If the number is an even number, it will take that number and 
// multiply by 2, 5 times. If the number is an odd number, then 
// it will take that number and multiply by 3, 6 times.



// Print that number to the console with the proper formatting. 
// The following will be an output: 

// “Transformed number is: 23”

// For this question, you are not allowed to use any types of loops 
// and instead utilize only Goto statements along with conditional 
// if and else statements. 

#include <iostream>
using namespace std;

int main(){

int age;
int ie, io;

cout << "Enter age" << endl;
cin >> age;

if(age%2==0) goto EVEN;
else goto ODD;

EVEN:
ie = age * 2 * 2 * 2 * 2 * 2 ;
cout << "Transformed number is: " << ie << endl;
return 0;

ODD:
io = age * 3 * 3 * 3 * 3 * 3 * 3;
cout << "Transformed number is: " << io << endl;
return 0;
}
