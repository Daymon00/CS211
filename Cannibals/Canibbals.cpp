#include <iostream>
using namespace std;
 int main(){
     struct state{
         int mr = 3;
         int cr = 3;
         int ml = 0;
         int cl = 0;
         char boat = 'r';

     };
    state state1;
    state1.mr = 10;
    cout << state1.mr << endl;
    
 }