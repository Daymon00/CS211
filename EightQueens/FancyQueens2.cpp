#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, j, k, l;
    char c = ' ';
    for(i = 0; i < 8; i++)
        for(k = 0; k < 7; k++){
            for(j = 0; j < 8; j++){
                if((i+j) % 2 == 0)
                    c = char(219);
                else
                    c = ' ';
                for(l = 0; l < 7; l++)
                    cout << c;
                }
            cout << char(179); 
            cout << endl;
        }
//before exiting print lower border
        for(i = 0; i < 7 * 8 + 1; i++)
            cout << char(196);
        cout << endl;
}