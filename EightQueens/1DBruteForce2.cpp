#include <cmath>
#include <iostream>
using namespace std;

bool ok(int b[]){
for(int i=0; i<8; i++){
   for(int c=i+1; c<8; c++){  
   if(b[i]==b[c]||(c-i)==abs(b[c]-b[i])) return false;
   }
}
return true;//if none of these returned false, then the board is ok and we return true
};//end of ok

void print(int b[], int z){//this method prints out the double array
cout<<"Solution: " <<z<<endl;
for(int j =0;j<8;j++){//loop for row
cout<<b[j];
cout<<endl;
}//end of loop for row

};//end of print

int main()
{
int board[8];
int count = 0;
for(int i0 =0; i0 <8; i0 ++)
for(int i1 =0; i1 <8; i1 ++)
for(int i2 =0; i2 <8; i2 ++)
for(int i3 =0; i3 <8; i3 ++)
for(int i4 =0; i4 <8; i4 ++)
for(int i5 =0; i5 <8; i5 ++)
for(int i6 =0; i6 <8; i6 ++)
for(int i7 =0; i7 <8; i7 ++){
board[0]=i0;
board[1]=i1;
board[2]=i2;
board[3]=i3;
board[4]=i4;
board[5]=i5;
board[6]=i6;
board[7]=i7;
  
  
  
//use the indices of the loops to set a configuration in array board...
// if this configuration is conflict-free, print the count and the board
if(ok(board)){
print(board, ++count);//prints board if it is ok
}//end if(ok(board)
  
//clear/reset the board
board[0]=0;
board[1]=0;
board[2]=0;
board[3]=0;
board[4]=0;
board[5]=0;
board[6]=0;
board[7]=0;
}
return 0;
}//end of main