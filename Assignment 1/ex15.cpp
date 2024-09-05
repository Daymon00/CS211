/* 
Assignment 1 : page 67, exercise 15
Name: Daymon Wu

15. Write a multiway if-else statement that classifies the value of an int variable
n into one of the following categories and writes out an appropriate message.
n < 0 or 0 <= n <= 100 or n > 100

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number for n:" << endl; // calls for input
    cin >> n;   //input
    if (n < 0) cout << n << " is less than zero" << endl; //if n is less than 0
    else if ((0 <= n) && (n <= 100)) cout << n << " is in between 0-100" << endl; //if n is between those two numbers
    else if (n > 100) cout << n << " is bigger than 100" << endl;   //if n is more than 0
    
}