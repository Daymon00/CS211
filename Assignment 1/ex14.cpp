/* 
Assignment 1 : page 36, exercise 14
Name: Daymon Wu

14. The following code intends to input a user’s first name, last name, and age.
However, it has an error. Fix the code.
string fullName;
int age;
cout << "Enter your first and last name." << endl;
cin >> fullName;
cout << "Enter your age." << endl;
cin >> age;
cout << "You are " << age << " years old, " << fullName << endl;

*/

#include <iostream>
using namespace std;
int main(){
string first, last;
int age;
    cout << "Enter your first and last name." << endl;  //We put 2 strings because fullName string can only store 1 word and a full name has 2 words
    cin >> first >> last;  //take the first and second input from user 
    cout << "Enter your age." << endl;
    cin >> age;
    cout << "You are " << age << " years old, " << first << " " << last << endl;// output first and last with age.
}