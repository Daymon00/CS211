#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int &c){
    for(int i = 0; i < c ; i++){
        if((q[i] == q[c])||(c-i == abs(q[c]-q[i]))) return false;  //First part of test: left and right
    }                                                           //Second part of test: Diagonal Test
    return true;
}
void print(int q[], int &c, int &solutionCounter){
    solutionCounter++;
    cout << "Solution number: "<< solutionCounter << endl;
        for(int i = 0; i < 8 ; i++){
            for(int j = 0; j < 8 ; j++){
                if(q[j] == i) cout << "1";
                else cout << "0";
            }
            cout << endl;
    }
}

int main(){
    int q[8] = {0};                 //Array length
    int c = 0;                      //Declare variables row and cols
    q[0] = 0;                       //Put queen in upper left square
    int solutionCounter = 0;
    int input = 0;

    cout << "Enter for n: " << endl;
    cin >> input;
    
while(c >= 0){
    if(c > 7){ 
        print(q,c, solutionCounter);      //col : if more than 8 do this
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