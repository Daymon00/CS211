#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, j, k, l;
    typedef char box[5][7];   //translator ( making box a type)
    //dereferencing to say whether it is a white box or black box
    //*board array pointing to box bb or box wb
    box bb, wb, *board[8][8]; //2d 5,7 2d 5,7 >> *board pointer to box

    //fill in bb = black box
    //for in wb = whitebox
    for(i = 0; i < 5; i++)
        for(j = 0; j < 7; j++){
            wb[i][j] = ' ';
            bb[i][j] = char(219);
    }
    
    //fill board with pointers to bb and wb in alternate positions
    for(i = 0; i < 8; i++)
        for(j = 0; j < 8; j++)
        //if row + col and the box is even then set board to a white box
            if((i+j) % 2 == 0)
            //set box equal to the address of the whiteBox
                board[i][j] = &wb;
        //else set it to a black box
            else
            //set box equal to the address of the blackBox
                board[i][j] = &bb;
    
    //print the board via the pointers in array board
    
    //first print upper border
    cout << ' ';
    for(i = 0; i < 7 * 8; i++)
        cout << '_';
    cout << endl;

    //now print the board
    for(i = 0; i < 8; i++)
        for(k = 0; k < 5; k++){
            cout << ' ' << char(179); //print left border
            for(j = 0; j < 8; j++)
                for(l = 0; l < 7; l++)
                    //dereferencing to say whether it is a white box or black box
                    cout << (*board[i][j])[k][l];
            cout << char(179) << endl; //at the end of line print bar and then newline
        }

    //before exiting print lower border
    cout << " ";
    for(i = 0; i < 7 * 8; i++)
        cout << char(196);
    cout << endl;
    }