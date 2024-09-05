/*
Write a function that determines if two strings are anagrams. The function
should not be case sensitive and should disregard any punctuation or spaces.
Two strings are anagrams if the letters can be rearranged to form each other.
For example, “Eleven plus two” is an anagram of “Twelve plus one”. Each string
contains one “v”, three “e’s”, two “l’s”, etc. Test your function with several
strings that are anagrams and non-anagrams. You may use either the string class
or a C-style string.
*/
#include <iostream>
#include <cstdlib> 
#include <string>
#include <cstring>
using namespace std;
const int CHARS = 50;
bool compare(char* str1, char* str2){
    int count1[CHARS] = {};
    int count2[CHARS] = {};
    int i;
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    if (str1[i] || str2[i]) return false;
    for (i = 0; i < CHARS; i++)
        if (count1[i] != count2[i])
            return false;
    return true;
}
int main(){
    char a[50], b[50];
    int lengthA, lengthB;
    cout<<"Enter 1st string : " << endl;
        fgets(a,50,stdin);
        lengthA = strlen(a);
    cout<<"Enter 2nd string : " << endl;
        fgets(b,50,stdin);
        lengthB = strlen(b);
    if(compare(a,b)) cout<<"The strings are anagrams. :)" << endl;
    else cout<<"The strings are not anagrams. :(" << endl;
}
/*
Explaination: To answer this question I started by declaring two char arrays to store the string of
the two strings inputted by the user. The array should store a maximum of 50 chars. The only thing I would need now
is a function to compare the strings that would consider them an anagram or not. In my compare function I want 
the output to be true or false. the parameters of the function have to be char* because it is an array. So two char*
arrays in the parameter are needed. After that I find out what the size of each array are and I compare the characters to
each other using two for loops. If the chars match any characters in the other string then it will return true. But if
one bad char does not match the other chars then it will return false.
*/

