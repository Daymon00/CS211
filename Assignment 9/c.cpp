/*
The text file words.txt, which is included in the source code for this book,
contains an alphabetically sorted list of English words. Note that the words are in
mixed upper- and lowercase.
 Write a program to read each word in, one line at a time, and help you find the word
that has the most consecutive vowels. Only use the letters a, e, i, o, and u as vowels.
 For example, the word “aqueous” has four consecutive vowels. However, there is a
word in the list with five consecutive vowels. What is it?
*/


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

bool is_vow(char c){
    // this compares vowel with
    // character 'c'
    return (c == 'a') || (c == 'e') ||
           (c == 'i') || (c == 'o') ||
           (c == 'u');
}
int numberVowels(string str){ 
    int counter = 0;
    // loop to check for each character
    for (int i = 1; str[i]; i++)
 
        // comparison of consecutive characters
        if ((!is_vow(str[i - 1])) || (!is_vow(str[i]))) counter++;
        return counter;
}
int main(){
    ifstream file("words.txt"); //Open the file "word.txt"
    vector<string> words; //Create a vector type string called "words"
    
    string word; //creat a temp variable called word
    while (file >> word){  //keep pushing back a word until there are no more words
            transform(word.begin(), word.end(), word.begin(), ::tolower);
        words.push_back(word);
    }
    file.close(); //Until there are no more words close the file
    string longestWord; //Create a variable string that will store the answer
    int wordLength = 0;
    int count;
    bool good = true;
    for (string o : words){ //Loop through the entrire word vector array
        int n = o.length();
        char char_array[n + 1];
        strcpy(char_array, o.c_str());
        count = numberVowels(o);
        if(count = 5) longestWord = o;
        for (int i = 0; i < n; i++){
            cout << char_array[i];
        }
        cout << endl;
    }
    
    

    cout << "The Longest Word is: " << longestWord << endl;
    return 0;
}
