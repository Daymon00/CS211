#include <iostream>
using namespace std;
 int main(){
     int i = 32;
     int * pointer = &i;
     cout << pointer << endl;
     cout << *pointer << endl;
 }