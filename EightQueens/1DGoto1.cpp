#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q[8];                       //Array length
    int c = 0;        //Declare variables row and cols
    q[0] = 0;                       //Put queen in upper left square
    int solutionCounter = 0;

NC:
    c++;
    if(c == 8) goto PRINT;
    q[c] = -1;

NR:
    q[c]++;
    if(q[c]==8) goto BACKTRACK;

    for(int i = 0; i < c ; i++){
        if((q[i] == q[c])||(c-i == abs(q[c]-q[i]))) goto NR;  //First part of test: left and right
    }                                                         //Second part of test: Diagonal Test
    goto NC;

BACKTRACK:
    c--;
    if(c == -1) return 0;
    goto NR;

PRINT:
    solutionCounter++;          //Increment trials by one
    cout << "Solution number: "<< solutionCounter << endl;
        for(int i = 0; i < 8 ; i++){
            for(int j = 0; j < 8 ; j++){
                if(q[i] == j) cout << "1";
                else cout << "0";
            }
            cout << endl;
        }
        goto BACKTRACK;
}