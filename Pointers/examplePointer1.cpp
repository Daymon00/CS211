#include <iostream>
using namespace std;
 int main(){
    int b[3][2];
    int arr[5] = {0, 1, 2, 3, 4};
    int *i;
    i = arr;
    int q[4][5];
    cout << sizeof(b) << endl;
    cout << sizeof(b+0) << endl;
    cout << sizeof(*(b+0)) << endl;
    cout << endl;
    cout << "b is: " << b << endl;
    cout << "b+1 is: " << b + 1 << endl;
    cout << "&b is: " << &b << endl;
    cout << "&b+1 is: " << &b+1 << endl;
    cout << endl;
    // cout << i << endl;
    // *(arr + 1) = 12;
    // cout << "arr[1] is: " << arr[1] << endl;
    // for( int c = 0; c < 5; c++){
    //     cout << arr[c] << " " ;
    // }
    // cout << endl;
    // cout << "&q is: " << &q << endl;
    // cout << "&q+1 is: " << &q+1 << endl;
    // cout << "From &q to &q+1 is 4 * 5 * 4(bytes) away from starting position" << endl;
    // cout << endl;
 }