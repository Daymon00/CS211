#include <iostream>
#include <cmath>
using namespace std;

bool ok(int b[]){                                                                   //Function to test if queen can be placed
for(int col=0; col<8; col++){                                                       //Counts and Increment columns
    for(int row=0; row<col; row++){                                                 //Everytime the Column increases the row will also increase
        if(b[col]==b[row]||(col-row) == abs(b[row]-b[col])) return false;           //If the queens meet from left to right || If the queen meets diagonally : Return False
    }
}
return true;                                                                        //Else return true
}

void print(int b[], int &count){                                                    //Function for print the array
count++;                                                                            //Increment the count variable evertime this function is called
cout <<  "Solution number: " << count << endl;
for(int i=0; i<8; i++) cout << b[i] << " ";
cout << endl;
}

int main(){
    int board[8] = {0};                                                             //Board when the queens will be placed
    int count = 0;                                                                  //The counter
    for(int i0 =0; i0 <8; i0++)                                                     //Line 24 - 31 : Creates an eight by eight table with numbers incrementing to 7
            for(int i1 =0; i1 <8; i1++)
                for(int i2 =0; i2 <8; i2++)
                    for(int i3 =0; i3 <8; i3++)
                        for(int i4 =0; i4 <8; i4++)
                            for(int i5 =0; i5 <8; i5++)
                                for(int i6 =0; i6 <8; i6++)
                                    for(int i7 =0; i7 <8; i7++){
                                        board[0]=i0;                                //In the first column the rows 'i0' will increment each time the for loop is ran
                                        board[1]=i1;                                //Continues...
                                        board[2]=i2;
                                        board[3]=i3;
                                        board[4]=i4;
                                        board[5]=i5;
                                        board[6]=i6;
                                        board[7]=i7;
                                        if (ok(board)) print(board, count);

                                    for(int k = 0; k < 8; k++){
                                        board[k]=0;
                                    }
                                    }
return 0;
}