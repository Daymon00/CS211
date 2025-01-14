
#include <cmath>
#include <iostream>
using namespace std;

bool ok(int b[8][8]){
    int i, r, c;
    for(c=0; c<8; c++){
        r=0;
        while(b[r][c]!=1)r++;//find the first queen in the column
        for(i=0;i<c;i++){//loop checks if there are other queens on same row
            if(b[r][i]==1) return false;
        }//end of loop checking same row
        for(i=1;((r-i)>=0 && (c-i)>=0);i++){//this loop checks for queens diagnolly up
            if(b[r-i][c-i]==1) return false;
        }//end of loop checking diagnolly up
        for(i=1;((r+i)<8 && (c-i)>=0);i++){//this loop checks for queens diagnolly down
            if(b[r+i][c-i]==1) return false;
        }//end of loop checking diagnolly down
    }
    return true;//if none of these returned false, then the board is ok and we return true
};//end of ok
void print(int b[8][8], int z){//this method prints out the double array
    cout<<z<<endl;
    for(int i=0;i<8;i++){//loop for col
        for(int j =0;j<8;j++){//loop for row
            cout<<b[i][j];
        }//end of loop for row
        cout<<endl;
    }//end of loop for col
    cout<<"done"<<endl;
};//end of print
int main()
{
    int board[8][8]={0};
    int count = 0;
    for(int i0 =0; i0 <8; i0 ++)
        for(int i1 =0; i1 <8; i1 ++)
            for(int i2 =0; i2 <8; i2 ++)
                for(int i3 =0; i3 <8; i3 ++)
                    for(int i4 =0; i4 <8; i4 ++)
                        for(int i5 =0; i5 <8; i5 ++)
                            for(int i6 =0; i6 <8; i6 ++)
                                for(int i7 =0; i7 <8; i7 ++){
                                    board[i0][0]=1;
                                    board[i1][1]=1;
                                    board[i2][2]=1;
                                    board[i3][3]=1;
                                    board[i4][4]=1;
                                    board[i5][5]=1;
                                    board[i6][6]=1;
                                    board[i7][7]=1;
                                    
                                    
                                    
                                    //use the indices of the loops to set a configuration in array board...
                                    // if this configuration is conflict-free, print the count and the board
                                    if(ok(board)){
                                        print(board, ++count);//prints board if it is ok
                                    }//end if(ok(board)
                                    for(int g=0;g<8;g++){//these two loops clear the board
                                        for(int h=0;h<8;h++){
                                            board[g][h]=0;
                                        }
                                    }//end of two loops clearing board
                                }//end of for(int i7 =0; i7 <8; i7 ++)
    return 0;
}//end of main
