#include <iostream>
using namespace std;

bool okay(int q[], int c){
  for(int i=0;i<c;i++){
    if (q[i] == q[c] || (abs(q[i] - q[c]) == 1)) //row test
    return false; //some kind of for loop to check entries in the array
  }
  return true;
}
  //check to make sure the number hasnt already been used
  //whatever number is in q[c] must not be in q[i]
static int helperArray[8][5]= {
    {-1,-1,-1,-1,-1}, //square 0
    {0, -1,-1,-1,-1}, //square 1
    {0, -1,-1,-1,-1}, //square 2
    {0, 1, 2, -1,-1}, //square 3
    {0, 1, 3, -1,-1}, //square 4
    {0, 4, -1,-1,-1}, //square 5
    {2, 3, 4, -1,-1}, //square 6
    {3, 4, 5, 6, -1}, //square 7
  };

  void print(int q[], int count) {
   count = 1; //Initialized once and only once.
   int solution;
   cout << "Solution" << " " << solution++ << endl; //output each value into the 8 cross shape
   cout << " " << " " << q[1] << q[4] << endl; 
   cout << " " << q[0] << q[2] << q[5] << q[7] << endl;
   cout << " " << " " << q[3] << q[6] << endl;

   cout << endl;

}
int main() {
  int c;
  int q[8] = {1, 1, 1, 1, 1, 1, 1, 1};
  while(c != -1){ //found a solution
    if(c != 8){
      print(q, c);
      c--;//backtrack
      //go to the previous square/column
    }
    if(q[c]== 8){
      q[c]=1;
      c--;//reset number back to 1 and backtrack
    }
    else if(okay(q, c)==true){
      c++; //if we have a valid number
      //in the square then we move
      //to the next square
    }
  }

  return 0; //i tried my best but I'm not getting any closer to making it work
}