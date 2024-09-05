/* 
Assignment 2 : page 97, exercise 7
Name: Daymon Wu

Write a program that calculates the total grade for N classroom exercises as a percentage. The user should input the value for N followed by each of the N scores
and totals. Calculate the overall percentage (sum of the total points earned divided
by the total points possible) and output it as a percentage. Sample input and output
are shown as follows:
How many exercises to input? 3
Score received for exercise 1: 10
Total points possible for exercise 1: 10
Score received for exercise 2: 7
Total points possible for exercise 2: 12
Score received for exercise 3: 5
Total points possible for exercise 3: 8
Your total is 22 out of 30, or 73.33%.


*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double input = 0; //doubles because we are working with percent
    double score = 0; //achieved score
    double total = 0; //total score than can be obtained
    double temp = 0; //temp variable for adding numbers
    double n = 1;   //the number of excersizes the user wants to do through
    double percent = 0; //answer
    cout << "How many exercises to input?" << endl;
    cin >> input;
    while (input  > 0){
        cout << "Score received for exercise " << n << ": " << endl;
        cin >> temp;
        score = score + temp; //update the total user score
        temp = 0; //reset temp to 0
        cout << "Total points possile for exercise" << n << ": " << endl;
        cin >> temp;
        total = total + temp; //update the total possible score
        temp = 0; //reset temp to 0
        n++; //counting the number of excersizes
        percent = (score/total)* 100; //divide to get decimal percentage then times by 100 for a percentage
        input--; //counts down the input until there are no more inputs to go through
    }
    cout << "your total is " << score << " out of " << total << " , or "<< percent <<"%"<< endl;
    return 0;
}
