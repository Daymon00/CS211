/* 
Assignment 2 : page 99, exercise 13
Name: Daymon Wu

Create a text file that contains 10 integers with one integer per line. You can enter
any 10 integers that you like in the file. Then write a program that inputs a number
from the keyboard and determines if any pair of the 10 integers in the text file adds
up to exactly the number typed in from the keyboard. If so, the program should
output the pair of integers. If no pair of integers adds up to the number, then the
program should output “No pair found.”

*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
int arr[10];//array to store numbers in file
int num;
ifstream infile("numbers.txt"); //open the number.txt file
for(int i = 0; i < 10; i++) infile >> arr[i]; //store numbers from file to array
infile.close(); //close file
cout << "Enter a number: "; //user input
cin >> num; //initalize num from input user

for(int i = 0; i < 10; i++){ //get first number
    for(int j = i + 1; j < 10; j++){ //get second number ; going through array to find if sum adds up to "num"
        if(arr[i] + arr[j] == num){ // if any of those numbers add up to user then output the answer
            cout << "These two numbers add up to " << num << ": " << arr[i] << " " << arr[j] << endl;
        }
    }
}
cout << "No pair found" << endl; //if there is no pair this will print
return 0;
ans == pow(pow(x,sqrt))
}
