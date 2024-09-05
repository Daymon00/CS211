/*
The text file words.txt, which is included in the source code on the book’s website, contains an alphabetically sorted list of English words. Note that the words
are in mixed upper- and lowercase.
 Write a program that reads this file and finds the longest word that reverses to a
different word. For example, “stun” reverses to make the word “nuts” but is only
four letters long. Find the longest such word. In writing your program you can use
the information that the words.txt file contains exactly 45,407 words.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // Open the file
    ifstream file("words.txt");

    // Read the words into a vector
    vector<string> words;
    vector<string> reverseWords;
    vector<string> sameWords;
    string word;
    string other;
    int count = 0;
    while (file >> word){
        transform(word.begin(), word.end(), word.begin(), ::tolower); //turn all to lower case
        words.push_back(word); //store all words into array
    }
    file.close();
    string longestWord; //make a vector of words in reverse spelling
    for (string word : words){ 
        string reverse = string(word.rbegin(), word.rend());
        reverseWords.push_back(reverse);
    }
    for(string i :reverseWords){ 
        for (string j : words){
            if(i == j){ //if they are the same push back into smaller array
                sameWords.push_back(i);
            }
        }
    }
    for (string x: sameWords){ //get the longest string with the compared array
        int currentSize = x.length();
        if ( currentSize > count){
            count = currentSize;
            longestWord = x;
        }
    } 
    cout << "The Longest Word is: " << longestWord << endl;
    return 0;
}