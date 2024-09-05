/* 
Assignment 4 : page 181, problem 1
Name: Daymon Wu

*/
#include <iostream>
using namespace std;

void computeCoin(int coin_value, int &number, int &amount){
    number = amount / coin_value;// if quaters divide by 25 and get answer
    amount = amount - number * coin_value; //basically the remainder
}

int main(){
int amount,number;
char ch;
cout << endl;
cout << "Enter the change in cents: ";
    cin >> amount;

while(true){ //loop until break out of loop

    while(amount < 1 || amount > 99){ //if not in range
        cout << "Amount must be between 1 and 99: ";
    }
    cout << amount << " cents is the same as" << endl;
    computeCoin(25, number, amount); //calls function and counts how many quater and subtracts to get amount
    cout << number << " Quarter(s) ";
    computeCoin(10, number, amount); //calls function and counts how many dime and subtracts to get amount
    cout << number << " Dime(s) ";
    cout << amount << " Penny/pennies" << endl; //left over amount is in pennies since we cannot use nickles
    cout << "Continue?(y/n): ";
    cin >> ch; //get option from user
    if(ch == 'y'){  //loop back to wihle loop
        cout << "Enter the change in cents: ";
        cin >> amount;
    }
    else if(ch == 'n'){ //if false then return end program
        return 0;
    }
    cout << endl;
}
return 0;
} 
