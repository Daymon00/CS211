 /* 
Assignment 6: page , problem  9
Name: Daymon Wu

9. Write a function to compare two C-strings for equality. The function should return
true if the strings are equal and false if they are not. Your function should ignore
case, punctuation, and whitespace characters. Test your function with a variety of
input strings.

*/

#include <iostream>
#include <cstdlib> // for basic stuff like fgets()
#include <cstring> //used so we can use the strlen() function
using namespace std;
//true or false function to compare one char ARRAY to another char ARRAY
bool compare(char *a, char *b, int lengthA, int lengthB) {
    //char *a and char*b has to be pointers because of array
    //int lenghtA and B are only changed within the main Funtion
    char char1, char2; // temporary vaiables for holding current char in string
    int i = 0, j = 0; //The are increment variables for both strings
    while( i < lengthA && j < lengthB) { //while the increment of i and j has not reached the end of the charARRAY
        char1 = a[i]; //used for updating the the char in string (increment later)
        char2 = b[j]; //used for updating the the char in string (increment later)
/*1st*/ if(char1 == '.' || char1 == ' ') i++; //if has a . or _ skip to next
/*2nd*/ else if(char2 == '.' || char2 == ' ') j++; //if has a . or _ skip to next
/*3rd*/ else { //if the char is a alphabet
            char1 = toupper(char1); //change all to upper case so case does not matter
            char2 = toupper(char2); //change all to upper case so case does not matter
            if(char1 != char2) return false; //return false if the charaters do not match
                i++;//skip to the end of the array so the while loop can end
                j++;//skip to the end of the array so the while loop can end
        }
    }
return true;//if they match return true
}
//main function
int main(){
    char a[50], b[50];// assgin two arrays for chars
    int lengthA, lengthB; // these variables will be used to the length of each array
    cout<<"Enter 1st string : " << endl; //input
        fgets(a,50,stdin);//fgets reads the string into chars so we can input them into the array
        lengthA = strlen(a);//gives the length of stringA
    cout<<"Enter 2nd string : " << endl; //input
        fgets(b,50,stdin);//fgets reads the string into chars so we can input them into the array
        lengthB = strlen(b);//gives the length of stringB
    if(compare(a,b,lengthA,lengthB)) cout<<"The strings match. :)" << endl;
    //calls for the bool funtion to see if the strings match
    else cout<<"The strings do not match. :(" << endl;
    //if the strings do not match ouput that statement
}
