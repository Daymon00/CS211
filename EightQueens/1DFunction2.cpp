#include <iostream>
#include <cmath>
using namespace std;

// Returns true if the queen in column c is ok
bool ok(int q[], int c) {
  for(int i = 0; i < c; i++){
    if(q[i] == q[c] || abs(c-i) == abs(q[c] - q[i]))
    return false;
  }
  return true;
}

void print(int q[]) {
   static int numSolutions = 0;
   cout << "Solution #" << ++numSolutions << ": ";
  for(int i = 0; i < 8; i++){//
      cout << q[i] << " ";
      } // Print the array
   cout << "\n";//and then go to a new line
}

void backTrack(int q[], int &c){
       c--;
       if(c == -1){
         exit(0);
          q[c]++;
       }
     }

int main() {
   int q[8] = {0}, c = 0;   // Initialize the array to 0.
   q[0] = 0; // Start in the 1st row, 1st column

   while (c >= 0) { 
   // End the loop if you backtrack from the first column
      c++; // Move to the next column
      if(c == 8){ // If you have passed the last column,
         print (q);
          backTrack (q, c);
       }// Call the print function and backtrack
      else{
        q[c] = -1;
       } // Otherwise, move to one before the first row

    while (c >= 0) {
        q[c]++; // Move to the next row
         if(q[c] == 8){
           backTrack (q,c);
           }
         // If you have passed the end of the column, backtrack
          else{
            if(ok (q, c))
            break;
           }
       } 
      
    } // Otherwise, call the ok function.  If it returns true, go back to the beginning of the outer loop.
           return 0;
  }
  