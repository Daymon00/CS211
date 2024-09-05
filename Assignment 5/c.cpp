/* 
Assignment 5 : page , problem 10
Name: Daymon Wu

10. Write a program to assign passengers seats in an airplane. Assume a small airplane
with seat numbering as follows:
1 A B C D
2 A B C D
3 A B C D
4 A B C D
5 A B C D
6 A B C D
7 A B C D
 The program should display the seat pattern, with an 'X' marking the seats already
assigned. For example, after seats 1A, 2B, and 4C are taken, the display should look
like this:
1 X B C D
2 A X C D
3 A B C D
4 A B X D
5 A B C D
6 A B C D
7 A B C D
 After displaying the seats available, the program prompts for the seat desired, the
user types in a seat, and then the display of available seats is updated. This continues until all seats are filled or until the user signals that the program should end.
If the user types in a seat that is already assigned, the program should say that that
seat is occupied and ask for another choice.
*/
#include <iostream>
using namespace std;

const int m = 7; //rows
const int n = 5; //columns
const int maxSeats = 28;

void printPlane(char plane[m][n]){
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << plane[i][j] << " \n"[j == n-1];
            cout << endl;
}
void getSeat(char& row, char& seat, char plane[m][n]){
    int changeRow = 0;
    int changeSeat = 0;
    cin >> row >> seat;
    if (row == '1') changeRow = 0;
    else if (row == '2') changeRow = 1;
    else if (row == '3') changeRow = 2;
    else if (row == '4') changeRow = 3;
    else if (row == '5') changeRow = 4;
    else if (row == '6') changeRow = 5;
    else if (row == '7') changeRow = 6;
    if (seat == 'A') changeSeat = 1;
    else if (seat == 'B') changeSeat = 2;
    else if (seat == 'C') changeSeat = 3;
    else if (seat == 'D') changeSeat = 4;
    if (plane[changeRow][changeSeat]!= 'X') plane[changeRow][changeSeat] = 'X';
    else{
        cout << "Seat " << row << seat << " is already taken." << endl;
        cout << "Enter another seat: ";
        getSeat(row, seat, plane);
    }
}

int main(){
    char cont = 'y';
    char row, seat;
    int count = 0;
    cout << "Choose a seat." << endl;
   //aarry
    char plane[m][n] = {{'1', 'A', 'B', 'C', 'D'},
                        {'2', 'A', 'B', 'C', 'D'},
                        {'3', 'A', 'B', 'C', 'D'},
                        {'4', 'A', 'B', 'C', 'D'},
                        {'5', 'A', 'B', 'C', 'D'},
                        {'6', 'A', 'B', 'C', 'D'},
                        {'7', 'A', 'B', 'C', 'D'},};
    while( cont = 'y'){
        printPlane(plane);
        cout << "Enter the row and seat you want(ex. 1 A): " << endl;
        count++;
        getSeat(row, seat, plane);//function call 
        printPlane(plane);
        if(maxSeats <= count){ //if this is true pick another
            cout << "Do you want to pick another seat? (y/n): " << endl;
            cin >> cont;
        }
    }
}
