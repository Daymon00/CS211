#include <iostream>
#include <math.h>


bool perfectSquare(int n){
    int x = 0;
    x = sqrt(n);
    if (n == x * x)
    return 
        true;
    else return 
        false;
}
bool lastTwoDigits(int y){
    int u = 0;
    u = sqrt(y);
    if ((u > 99) && (u % 2 == 1) && ((u/10) % 2 == 1))
    return 
        true;
    else return 
        false;
}

using namespace std;
int main(){

    double i = 0;
    while (i < 100000){
        if ((perfectSquare(i)) && (lastTwoDigits(i))){
            cout << "The number " << i << " is a perfect square." << endl;
            i++;
        }
        else i++;
        
    }
    return 0;
}