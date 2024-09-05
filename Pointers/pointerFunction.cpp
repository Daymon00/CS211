#include <iostream>
using namespace std;

void inputArray(){
    int arr[6]={};
    cout << "Enter an array of 6 numbers: " << endl;
    for ( int i = 0; i < 6; ++i){
        cin >> arr[i];
    }
    for ( int n = 0; n < 6; ++n){
        cout << arr[n] << endl;
    }
    int maxEven;
    int maxOdd;
    for ( int k = 0; k < 6; ++k){
        if((arr[k] % 2 == 0)){
            if(arr[k]>maxEven)
            maxEven = arr[k];
        }
        else if ((arr[k] % 2 == 1)){
            if(arr[k]>maxOdd)
            maxOdd = arr[k];
        }
    }
    cout << "maxEven is: " << maxEven << endl;
    cout << "maxOdd is: " << maxOdd << endl;
    cout << "&maxEven is: " << &maxEven << endl;
    cout << "&maxOdd is: " << &maxOdd << endl;
}
int main(){
inputArray();
}