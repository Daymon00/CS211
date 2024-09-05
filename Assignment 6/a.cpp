 /* 
Assignment 6: page , problem  2
Name: Daymon Wu

Write a program that will read in a line of text and output the number of words
in the line and the number of occurrences of each letter. Define a word to be
any string of letters that is delimited at each end by either whitespace, a period, a
comma, or the beginning or end of the line. You can assume that the input consists
entirely of letters, whitespace, commas, and periods. When outputting the number
of letters that occur in a line, be sure to count uppercase and lowercase versions of a
letter as the same letter. Output the letters in alphabetical order and list only those
letters that occur in the input line. For example, the input line
 I say Hi.
 should produce output similar to the following:
 3 words
 1 a
 1 h
 2 i
 1 s
 1 y

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
int count=1;//Count the words starting from one
int alphabetArr[26]={}; //Empty array of 26 slots  for each alphabet
int lastChar; //Used to store the number of lastChar
string line; //Used to get input from user
char cont;
while(true){
    cout<<"Enter text : " << endl;
    getline(cin,line); //put the line that the uer inputs into the "line"
    int length = line.length();
    for(int i=0;i<length;i++){ // This for loop counts the words in the string line
        if(!isalpha(line[i])) count++;
        //If the alphabet in that line is an alphabet then increment wordCount
        lastChar = i;
        //Update the last char
    }  
        if(!isalpha(line[lastChar -1])) count--;
        //If the last word is not a alphabet then minus the word count ex: like a "/ or a ? or a period"
        cout<<"Number of words : "<< count << endl;
        //Output the number of words
        //counting of repeated alphabets
    for(int i=0;i<length;i++){ //repeat until end of string
        if(line[i]>=65 && line[i]<=90) alphabetArr[line[i]-'A']++;
        //For all UpperCase letters ASCI 'A' to 'Z'
        //Index A and increment the character count for each letter
        if(line[i]>=97 && line[i]<=122) alphabetArr[line[i]-'a']++;
        //For all LowerCase letters ASCI 'a' to 'z'
        //Index a and increment the character count for each letter
    }
    for(int i=0;i<26;i++) if(alphabetArr[i]!=0)
        //Go thorugh the entire charCount array
        //which alphabets has a count more than 0 will be printed
    cout<<(char)(i+'a')<<": "<<alphabetArr[i]<<endl;
        //Output the number of characters for each alphabet
    cout << "Do you want to continue? (Y/N)" << endl;
    cin >> cont;
    if (cont == 'N' || 'n') break;
    }
}
