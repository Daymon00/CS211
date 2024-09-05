#include <iostream>
#include <cstring>
using namespace std;

int main(){

// char a[] = "Hello";

// for (auto i:a) {
// 	cout << i << endl;

// }

char a[] = "Hello";
int i = 0;
int charLength = strlen(a);

LOOP:
cout << a[i] << endl;
i++;
if ( i < charLength)
    goto LOOP;
}




