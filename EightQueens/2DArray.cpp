#include <iostream>
using namespace std;

int main(){
    int b [8][8] = {};      //Initializing Board
    int r = 0, c = 0;       //Setting Row and Column variable
    b[r][c] = 1;            //Starting Postition: Upper left corner
    int solutionCounter = 0;//Counter the trial number soultions

    //NewColumn
    NC:                     //New Column
    c++;                    //Move to next column
    if(c==8) goto PRINT;    //If queen passes 7th column: goto PRINT 
    r = -1;                 //else If not c==8 go back to row(-1)

    //NewRow
    NR:                            //New Row
    r++;                           //Move to next row by incrementing
    if (r==8) goto BACKTRACK;      //If queen passes 7th row: goto BACKTRACK

    //Testing if row works
    for( int i = 0; i < c; i++){    //Increment
        if( b[r][i] == 1) goto NR;  //**If Rows and Increment C reaches 1: goto NEWROW
    }

    //upDiagTest (/)
    for( int i = 1;((r-i)>=0 && (c-i)>=0); i++){    // r-i>=0 && c-i>=0 (Tests for upDiagonal)
        if ( b[r-i][c-i] == 1) goto NR;             // If on the board (meets another queen) goto nextRow
    }                                                                  //Along the diagonal line
    //downDiagTest (\)
    for( int i = 1; ((r+i)<=7 && (c-i) >= 0); i++){ // r+i>=7 && c-i>=0 (Tests for downDiagonal) 
        if (b[r+i][c-i] == 1) goto NR;              // If on the board (meets another queen) goto nextCol
    }                                                                  //Along the diagonal line
    b[r][c] = 1;                                    // If all conditions meet (not diagonal)
    goto NC;                                        // goto Next Column

    BACKTRACK:
    
    c--; //going back to the previous column
    if (c == -1){
        cout << "No solutions to show." << endl;
        return 0;
    }
    
    r = 0;

    while (b[r][c] != 1){
        r++;
    }
    
    b[r][c] = 0; //takes queen off current position

    goto NR;     //goto Nextrow

    PRINT:
    solutionCounter++;          //Increment trials by one
    cout << "Solution number: "<< solutionCounter << endl;
    for (int i = 0; i < 8; i++){             //Printing out the 2D array
        for (int j = 0; j < 8; j++){         //
            cout << b[i][j] << " ";          //
        }
        cout << endl;
    }
    cout << endl;
    goto BACKTRACK;                          //Try another solution
    return 0;
}