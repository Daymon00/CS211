#include <iostream>
using namespace std;
 int main(){
     int q[] = {0,1,2};
    *(q+0) = 7;
    *(q+1) = 7;
    for(int i = 0; i < 3; i++){
        cout << q[i];
    }
 }

 //https://www.cplusplus.com/doc/tutorial/pointers/