/*
The text file words.txt, which is included in the source code on the book’s website, contains an alphabetically sorted list of English words. Note that the words
are in mixed upper- and lowercase.
 Write a program that reads this file and finds the longest word that contains only
a single vowel (a, e, i, o, u). Output this word (there will actually be several ties for 
*/

#include <iostream> //Standard for basic input and output 
#include <fstream> //Used for file input and output
#include <string> //Use for strings
#include <vector> //Used to sort and filter words in the txt
using namespace std;
int main(){
    ifstream file("words.txt"); //Open the file "word.txt"
    vector<string> words; //Create a vector type string called "words"
    vector<string> singleVowels;
    string word; //creat a temp variable called word
    while (file >> word){  //keep pushing back a word until there are no more words
        words.push_back(word);
    }
    file.close(); //Until there are no more words close the file
    string longestWord; //Create a variable string that will store the answer
    int wordLength = 0;
    int count;
    for (string word : words){ //Lopp through the entrire word vector array
        int sizeWord = word.length();
        for( int i = 0; i < sizeWord; i++){ // LOop
            if (word.at(i) == 'A' || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' || 'i' || 'o' || 'u'){ //amount of vowels
                count++;           
            }
            if (count == 1) {
                singleVowels.push_back(word);
            }
            count = 0;
        }
    }
    
    for (string x: singleVowels){
        int currentSize = x.length();
        if ( currentSize > count){
            count = currentSize;
            longestWord = x;
        }
    } 
    
    cout << longestWord << endl;
    return 0;
}
