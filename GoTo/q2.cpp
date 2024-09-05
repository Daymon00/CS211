#include <iostream>
using namespace std;

int main(){

// int i = 0; 
// int j = 10; 

// while (j>3 && i < 5) { 
// 	cout << “The value of j is: “ << j << endl; 
// 	cout << “The value of i is: “ << i << endl;
// 	i++;
// 	j--;
// }

int i = 0; 
int j = 10; 

DOTHIS:
	cout << "The value of j is:" << j << endl; 
	cout << "The value of i is:" << i << endl;
	i++;
	j--;
	if (j>3 && i < 5) 
	goto DOTHIS;



}
