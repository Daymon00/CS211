#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int c){    //test function
  for(int i=0;i<c;i++){     //going through every c
    if (q[i] == q[c] || (abs(q[i] - q[c]) == 1))    //checks around to box
    return false;
  }
  return true;
}

int helperArray[8][5]= {  //this is the index
    {-1,-1,-1,-1,-1},       //it helps the program keep track of what boxes needs top be checked
    {0, -1,-1,-1,-1}, 
    {0, -1,-1,-1,-1}, 
    {0, 1, 2, -1,-1}, 
    {0, 1, 3, -1,-1}, 
    {0, 4, -1,-1,-1},
    {2, 3, 4, -1,-1}, 
    {3, 4, 5, 6, -1}, 
  };

void print(int q[], int &c, int &solutionCounter){
    solutionCounter++;                      //increment each time this function is run by one
    cout << "Solution number: "<< solutionCounter << endl;
    cout << " " << " " << q[1] << q[4] << endl;     //shape of the 8 cross
    cout << " " << q[0] << q[2] << q[5] << q[7] << endl;
    cout << " " << " " << q[3] << q[6] << endl;

   cout << endl;

}
int main(){
    int q[8] = {0};  //stores the answer
    int c = 0;      //the number of each box : basically the name of each
    q[0] = 0;       
    int solutionCounter = 0;

while(c >= 0){  //keeps going until we get our answer
    if(c < 8){  // for if in 0-7 cols
        q[c]++; //increment the numder in the cols
        if( q[c] > 8){  //if the number reachs 8
            c--;          //go back a row
            q[c]++;     //start incrementing till 8 again
        }
        for( int i = 0; i < 5; i++){ //for till 5 because of helperarray
            if( helperArray[c][i]==-1){ // if the helper array gives a -1
                c++;            //move to next col
                if(c==8){       //reaches the end
                    print(q,c,solutionCounter); //print it
                    c--;  //backtrack
                    if (c != -1) {   //when backtrack to -1
                        exit(0);
                    }
                }
            }
        }
    }

    else if (ok(q, c)){  // prgram starts here to check if the numbers meet ok condition
        c++;            //if yes go to next box
    }
    else        //if not
        q[c]++;  // try a new number
    }
    return 0; 
}