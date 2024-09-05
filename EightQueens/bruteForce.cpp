#include <iostream>
using namespace std;


void print(int board[8][8], int &attemptCounter){
    attemptCounter++;
    cout << "Attempt number: " << attemptCounter << endl; //print 2d array
    for(int i=0;i<8;i++){//loop for col
        for(int j =0;j<8;j++){//loop for row
            cout<<board[i][j];
        }//end of loop for row
        cout<<endl;
    }//end of loop for col
}
bool ok(int board[][8]){
    
    for( int i = 0; i < c; i++){    //Increment
        if( b[r][i] == 1) return false;  //**If Rows and Increment C reaches 1: goto NEWROW
    }
    //upDiagTest (/)
    for( int i = 1;((r-i)>=0 && (c-i)>=0); i++){    // r-i>=0 && c-i>=0 (Tests for upDiagonal)
        if ( b[r-i][c-i] == 1) return false;             // If on the board (meets another queen) goto nextRow
    }                                                                  //Along the diagonal line
    //downDiagTest (\)
    for( int i = 1; ((r+i)<=7 && (c-i) >= 0); i++){ // r+i>=7 && c-i>=0 (Tests for downDiagonal) 
        if (b[r+i][c-i] == 1) return false;              // If on the board (meets another queen) goto nextCol
    }   
    else                          
    return true;
}
int main(){
int r, c;
int board[8][8] = {0}; //Rows and Columns of 0s
int attemptCounter = 0;
 for (int i0=0; i0 < 8; i0++){
    for (int i1=0; i1 < 8; i1++){
        for (int i2 = 0; i2 < 8; i2++){
            for (int i3 = 0; i3 < 8; i3++){
                for (int i4 = 0; i4 < 8; i4++){
                    for (int i5 = 0; i5 < 8; i5++){
                        for (int i6 = 0; i6 < 8; i6++){
                            for (int i7 = 0; i7 < 8; i7++){
                                    board[i0][0] = 0;
                                    board[i1][0] = 0;
                                    board[i2][0] = 0;
                                    board[i3][0] = 0;
                                    board[i4][0] = 0;
                                    board[i5][0] = 0;
                                    board[i6][0] = 0;
                                    board[i7][0] = 0;
                            
                            if(ok(board)){
                                print(board, attemptCounter);//prints board if it is ok
                            }
                            else //reset the board to 0
                            for(int i=0;i<8;i++){//loop for col
                                for(int j =0;j<8;j++){//loop for row
                                board[i][j]=0;
                                }
                            }
                            
                            }
                        }
                    }
                }
            }
        }
    }
}
return 0;
}