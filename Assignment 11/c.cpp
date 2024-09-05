/*
The word ladder game was invented by Lewis Carroll in 1877. The idea is to begin
with a start word and then change one letter at a time until you arrive at an end
word. Each word along the way must be an English word.
 For example, starting from FISH, you can arrive at MAST through the following
word ladder:
FISH, WISH, WASH, MASH, MAST
 Write a program that uses recursion to find the word ladder given a start word and
an end word, or that determines no word ladder exists. Use the file words.txt that
is available online with the source code for the book as your dictionary of valid
words. This file contains 87,314 words. Your program does not need to find the
shortest word ladder between words; any word ladder will do if one exists.
*/
#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <set>
#include <fstream>
#include <string>

using namespace std;
const int ALPHA_LENGTH = 26;
// Takes two strings as parameter
// gets the user for  input and stores the answer the strings the user has to enter strings of same length or the function will repeat
void getWords(string &word1, string &word2) { //2 parameter strings
    while (true) { //when the default is true
        cout << "Please enter a word: ";//ask for word
        cin >> word1; //take in word
        cout << "Please enter another word of the same length: ";
        cin >> word2; //input
    if (word1.length() == word2.length()) { //if the two words are not the same length keep continuing the loop
        break; //if they are the same then it is ok to break
    }
    cout << "Please enter two words with the same length." << endl; //if the two words are the same
    }
}
// Takes two strings as parameter
// prints the words in the ladder
// step by step with incrementing between each character
void printWordLadder(string word1, string word2){
    queue<stack<string> > myQueue; // creates an empty queue of stacks like a vector 
    stack<string> wordladder;     //create a stack that contains final word ladder (first in last out)
    stack<string> myStack;     // creates and adds new words for word1
    myStack.push(word1);     //for the dictionary
    myQueue.push(myStack); //for tested words
    string token;   //temporary string token //temp variable
    ifstream dictionary("words.txt"); //open word text file
    set<string> myDictionary; //input vector for words.txt
    set<string> testedWords; //create a place to store tested words that do not exist
    if(dictionary.is_open()){  //when the word.txt file is still open
        while (dictionary >> token){         // when the queue is not empty
            myDictionary.insert(token); //get the word and input in the nector
        }
        while (!(myQueue.empty())) {             // when the queue is not empty
            stack<string> ladder = myQueue.front();
            myQueue.pop();
            string word = ladder.top();     // if the word on top of the stack is the destination word:
            if (word == word2) {       // output the elements of the stack as the solution.
                cout << "The ladder from " << word1 << " to " << word2 << " is \n";    //Copy the ladder stack to worldladder to take it in the order.
                while(!ladder.empty()){ //when the ladder is not empty
                    wordladder.push(ladder.top()); //keep outputting the ladder
                    ladder.pop(); //answr
                }
                while(!wordladder.empty()){ //this while loop to separate the  answers
                    cout<<wordladder.top()<<" (and) ";
                    wordladder.pop();
                }
            }
            else {    // for each and every word that exsists int he wordl.txt file do this
                string test;
                for (int i = 0; i < word.size(); i++) {
                    for (char j = 'a'; j <= 'z'; j++) {
                        test = word.substr(0, i) + j + word.substr(i + 1);   // if that word is an english word
                        if (myDictionary.count(test)) { // if that neighbor word has not already been used in a ladder before:
                            if (!testedWords.count(test)) { // create a copy of the current ladder stack.
                            stack<string> copy = ladder; // put the neighbor word on top of the copy stack.
                            copy.push(test); // add the copy stack to the end of the queue.
                            myQueue.push(copy);
                            }
                        }
                    testedWords.insert(test); // add test to tested words because it is already used.
                    }
                }
            }
        }
    } else {
    cerr << "Couldn't open the dictionary" << endl;
    }
}
int main() {
    string word1, word2; //Declare two string variables
    getWords(word1, word2); //call function getWords
    printWordLadder(word1, word2); //call function printWordLadder
return 0;
}