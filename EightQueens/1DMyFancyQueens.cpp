#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int &c){
    for(int i = 0; i < c ; i++){
        if((q[i] == q[c])||(c-i == abs(q[c]-q[i]))) return false;  //First part of test: left and right
    }                                                           //Second part of test: Diagonal Test
    return true;
}
void print(int q[], int &solutionCounter){
    int i, j, k, l;
    solutionCounter++;
    cout << "Solution number: "<< solutionCounter << endl;
    
    typedef char box[5][7]; //translator ( making box a type)
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

    static box bq = //This reates a queen for a black box
    { {char(219),char(219),char(219),char(219),char(219),char(219),char(219)},
      {char(219),     ' ' ,char(219),     ' ' ,char(219),     ' ' ,char(219)},
      {char(219),     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,char(219)},
      {char(219),     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,char(219)},
      {char(219),char(219),char(219),char(219),char(219),char(219),char(219)} };

    static box wq = //This creates the queen for a white box
    { {     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' },
      {     ' ' ,char(219),     ' ' ,char(219),     ' ' ,char(219),     ' ' },
      {     ' ' ,char(219),char(219),char(219),char(219),char(219),     ' ' },
      {     ' ' ,char(219),char(219),char(219),char(219),char(219),     ' ' },
      {     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' ,     ' ' } };
    //fill board with pointers to bb and wb in alternate positions
    //This for loop prints the black and white boxes
    for(i = 0; i < 8; i++)
        for(j = 0; j < 8; j++)
        //if row + col and the box is even then set board to a white box
            if((i+j) % 2 == 0)
            //set box equal to the address of the whiteBox
                board[i][j] = &wb;
            //set box equal to the address of the blackBox
            else
                board[i][j] = &bb;
    //This for loop prints the queens according to whether the queens are in even or odd positions
    //print the board via the pointers in array board
    for(i = 0; i < 8; i++)
            if((i+q[i]) % 2 == 0)
                board[i][q[i]] = &wq;
            else
                board[i][q[i]] = &bq;
    
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

int main(){
    int q[8] = {0};                 //Array length
    int c = 0;                      //Declare variables row and cols
    q[0] = 0;                       //Put queen in upper left square
    int solutionCounter = 0;

while(c >= 0){
    if(c > 7){ 
        print(q, solutionCounter);      //col : if more than 8 do this
        c--;               //start back tracking (go back a col)
        q[c]++;            //go through rows
    }
    if (q[c] > 7 ) {
        q[c] = 0;
        c--;
        if (c != -1) {
            q[c]++;
        }
    } 

    else if (ok(q, c)){
        c++;
    }
    else 
        q[c]++;
    }
    return 0; 
}