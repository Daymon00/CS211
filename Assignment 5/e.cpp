/* 
Assignment 5 : page , problem 15
Name: Daymon Wu

Traditional password entry schemes are susceptible to “shoulder surfing” in which
an attacker watches an unsuspecting user enter their password or PIN number and
uses it later to gain access to the account. One way to combat this problem is with
a randomized challenge-response system. In these systems, the user enters different
information every time based on a secret in response to a randomly generated challenge. Consider the following scheme in which the password consists of a five-digit
PIN number (00000 to 99999). Each digit is assigned a random number that is
1, 2, or 3. The user enters the random numbers that correspond to their PIN instead of their actual PIN numbers.
 For example, consider an actual PIN number of 12345. To authenticate, the user
would be presented with a screen such as
 PIN: 0 1 2 3 4 5 6 7 8 9
 NUM: 3 2 3 1 1 3 2 2 1 3
 The user would enter 23113 instead of 12345. This does not divulge the password
even if an attacker intercepts the entry because 23113 could correspond to other
PIN numbers, such as 69440 or 70439. The next time the user logs in, a different
sequence of random numbers would be generated, such as
 PIN: 0 1 2 3 4 5 6 7 8 9
 NUM: 1 1 2 3 1 2 2 3 3 3
 Your program should simulate the authentication process. Store an actual PIN
number in your program. The program should use an array to assign random
numbers to the digits from 0 to 9. Output the random digits to the screen, input
the response from the user, and output whether or not the user’s response correctly
matches the PIN number.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[10];               //array storing numbers
    string password = "12345"; //good password
    string userString = ""; //stores the password user has to enter
    string userinput;   //for getline command
    //filling the random array
    for (int i = 0; i < 10; ++i){ //goes thru one to ten
        int x = rand() % 3 + 1; //gives us random number 
        arr[i] = x; //arr is filled with random
    }
    for (int i = 0; i < 5; ++i){ //one to five
        char s = password.at(i); //the char that matches password at 54321
        int t = s - 48; //convert char to int
        userString += to_string(arr[t]); //covert it back
    }
    cout << "Enter the digits that correspond to your secred passcode." << endl;
    for (int i = 0; i < 10; ++i){ //output the numbers 
        cout << i << " "; //enter a space between each
    }
    cout << endl;
    for (int i = 0; i < 10; ++i){ 
        cout << arr[i] << " ";
    }
    cout << endl;
    getline(cin,userinput);
    if(userinput.compare(userString)==false){ //if it is the same
        cout << "Access Granted" << endl;
    }
    else{
        cout << "Wrong password" << endl;//not true
    }

    return 0;
}