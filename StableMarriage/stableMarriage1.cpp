#include <iostream>
using namespace std;
bool ok(int q[], int mp[][3],int wp[][3], int c){
        //(currMan = i)(newWoman = q[c])(currWoman = q[i])(newMan = c)
        for(int i=0; i<c; i++){     
        //if new woman is equal to current woman then it is false because we need a new woman
        if(q[c]==q[i]) return false;
        //if currMan prefers(<)newWoman && if same newWoman prefers(<)currMan to her partner
        if((mp[i][q[c]] < mp[i][q[i]]) && (wp[q[c]][i] < wp[q[c]][c])) return false;
        //if newMan prefers(<)currWoman && if the currWoman prefers(<)newMan to her partner
        if((mp[c][q[i]] < mp[c][q[c]]) && (wp[q[i]][c] < wp[q[i]][i])) return false;
        }
//if there are no instabilities with the current couples we have here, return true
return true;
}

void print(int q[], int &counter){
    //Increments solution counter
    counter++;
    cout << "Solution number: "<< counter << endl;
    cout << "Man" << "   " << "Woman" <<endl;
    //Go through the q[] array to output the answer
    for(int i = 0; i < 3 ; i++){ 
        cout << i << "     " << q[i] << endl;
    }
}

int main(){
    int q[3] = {0};             //Solution Array
    int c = 0;                  //columns (left to right)
    int counter = 0;            //for print function

    int mp[3][3]= { 0,2,1,      //Men's Preference helper array
                    0,2,1,
                    1,2,0 };
    int wp[3][3]= { 2,1,0,      //Women's Preference helper array
                    0,1,2,
                    2,0,1 };
    
while(c >= 0){                  //While columns are more than 0 is true
    if(c > 2){                  //Once the columns reaches 3
        print(q, counter);      //Print the solution
        c--;                    //Go left a column on array
        q[c]++;                 //Then increment the row so it can reset(see next line)
    }
    if (q[c] > 2) {             //Once the rows in the column reacher 3
        q[c] = 0;               //reset the rows to 0... so we can start over
        c--;                    //backtrack a column
        if (c != -1) {          //Once the columns backtracks and hits -1
            q[c]++;             //Increment row
        }
    } 
    else if (ok(q, mp, wp, c)){ //Test the helperArrays with the okFunction
        c++;                    //If true go to next element
    }
    else 
        q[c]++;                 //else try a new combination by incrementing row
    }
return 0; 
}