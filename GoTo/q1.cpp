
// int j = 10; 
// for (int i = 0; i<10; i++) {
// 	j = j + 5; 
// 	j = j - 2;
// }
#include <iostream>
using namespace std;
int main(){
	int j = 10;
	int i = 0;

ADD:

	j = j + 5; 
	j = j - 2;
	cout << j << endl;
	i++;
	
	if( i < 10 )goto ADD;
}



