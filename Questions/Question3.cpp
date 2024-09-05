/*
A popular word game involves finding words from a grid of randomly generated
letters. Words must be at least three letters long and formed from adjoining letters.
Letters may not be reused and it is valid to move across diagonals. As an example,
consider the following 4 * 4 grid of letters:
"A 4x4 from letters A to P"
Image
The word “FAB” is valid (letters in the upper left corner) and the word “KNIFE”
is valid. The word “BABE” is not valid because the “B” may not be reused. The
word “MINE” is not valid because the “E” is not adjacent to the “N”.
 Write a program that uses a 4 * 4 two-dimensional array to represent the game
board. The program should randomly select letters for the board. You may wish
to select vowels with a higher probability than consonants. You may also wish to
always place a “U” next to a “Q” or to treat “QU” as a single letter. The program
should read the words from the text file words.txt (included on the website with
this book) and then use a recursive algorithm to determine if the word may be
formed from the letters on the game board. The program should output all valid
words from the file that are on the game board.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    char arr[4][4] = {{a,b,c,d},
                      {e,f,g,h},
                      {i,j,k,l},
                      {m,n,o,p}};
    // Open the file
    ifstream file("words.txt");
    int count ;
    // Read the words into a vector
    vector<string> words;
    vector<string> answer;
    string word;
    string other;
    bool valid = true;
    int count = 0;
    while (file >> word){
        transform(word.begin(), word.end(), word.begin(), ::tolower); //turn all to lower case
        words.push_back(word); //store all words into array
    }
    file.close();
    for (string word : words){ 
        int sizeWord = word.length();
        char temp;
        for( int i = 0; i < sizeWord; i++){ // LOop
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < 4; j++){
                    temp = arr[i][j];
                    if (word.at(i) == temp){ //amount of vowels
                        valid = true;
                    else valid = false;          
                    }
                }
            }
        }
        if (valid = true){
            answer.push_back(word);
        }
    }
    for (string x: answer){
        cout << x << endl;
    }
    return 0;
}
/*
To answer this question I started by creating a two dimensional array to store the characters from a - p. After doing so,
I calledfor the word.txt file with the fstream library. I created two vectors to store the elements in the word.txt file 
and then antoher vector to store the words created from the 4x4 character array table. Also while inputting those words
into the vector i make them all lower case becasue I know that in the word.txt file some words are not all lower case which
might mess with my algorithm. I did not quite perfect this yet but I created a for loop to go through the elements in
word.txt file. In that for loop i will check each string and the characters within each string to see if they match the 
letters in the 4x4 char array. My attempt didnt work because I didnt have enough time but what is supposed to happen is 
if the letter in the string matches the letter in the array then it would return true and it would go to the next character
until it was false. If going all the characters worked then the current (string word) would be pushed back to the new vector
array called answer. After going through all the words in the txt file the next for loop will output all the elemetns of 
the answer array.
*/