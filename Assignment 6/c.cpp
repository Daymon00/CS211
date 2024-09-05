 /* 
Assignment 6: page , problem  9
Name: Daymon Wu

10. Write a simple trivia questionNumber game. Start by creating a Trivia class that contains
information about a single trivia question. The class should contain a string
for the question, a string for the answer to the question, and an integer representing the dollar amount the question is worth (harder questions should
be worth more). Add appropriate constructor and accessor functions. In your
main function create either an array or a vector of type Trivia and hard-code
at least five trivia questions of your choice. Your program should then ask
each question to the player, input the player’s answer, and check if the player’s
answer matches the actual answer. If so, award the player the dollar amount
for that question. If the player enters the wrong answer your program should
display the correct answer. When all questions have been asked display the total
amount that the player has won.
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
//Trivial Class
class Trivia {
	private:
		//Variables used for constructors
		int amount;
		string question;
		string answer;
	public:
		//Default Constructor
		Trivia(){
			question = "";
			answer = "";
			amount = 0;
		}
		//Ideal Constructor
		Trivia(int price, string q, string a){
			amount = price;
			question = q;
			answer = a;
		}
		string getQuestion(){ /*Get method for Question*/
			return question;
		}
		string getAnswer(){	/*Get method for Answer*/
			return answer;
		}
		int getMoney(){	/*Get method for Money*/
			return amount;
		}
};
  
//Main Function
int main(){
	int winnings = 0; // variable too add all money won for each question
	int count = 0;	// variable to count number of correct answer  
	int questionCounter = 0; //variable later used to increment through number of questions
	string userInput; // What the user inputs
	Trivia questionNumber[5]; //declare 5 trivial class instances
	Trivia *input; //declare 5 input pointers for trivia
	/*Syntax is (The amount of money for each question/the question/the answer) 
	for each "new Trivia"*/
	int randArr[5] = {}; //Generate random prize for each question
	for(int i = 0; i < 5; i++){
		randArr[i] = rand() % 10 + 1;
	}
	input = new Trivia( randArr[0],"How many legs does a horse have:", "4"); //creating trivia questions
	questionNumber[0] = *input;
	input = new Trivia( randArr[1],"What came first? The chicken or the egg:", "egg");
	questionNumber[1] = *input;
	input = new Trivia( randArr[2],"What color is grass:", "green");
	questionNumber[2] = *input;
	input = new Trivia( randArr[3],"Do dogs bark?:", "yes");
	questionNumber[3] = *input;
	input = new Trivia( randArr[4],"What sound does a cow make?:", "moo");
	questionNumber[4] = *input;

	for(int j=0; j<5; j++){
		cout<<"Question #"<< ++questionCounter << ":"<<questionNumber[j].getQuestion() << endl; //increment through all the questions
		cout << "This question is worth $" << questionNumber[j].getMoney() << endl; //get the amount each question is worth
		cout << "Answer here: "; //user input
		cin >> userInput; //input
		// if answer is correct
		if(questionNumber[j].getAnswer() == userInput){
			cout << "CORRECT" << endl; //display correct
			winnings = winnings + questionNumber[j].getMoney(); //add upp all the winnings
			count++; //count the number of questions correct
		}
		else{
			cout << "WRONG. The correct answer is: " << questionNumber[j].getAnswer()<<endl; // get the correct answer
		}
	}
	//Display all the ge
	cout<<"Number questions correct: " << count << " out of 5" << endl;
	cout<<"Winnings: $" << winnings << endl;
	
	return 0;
}