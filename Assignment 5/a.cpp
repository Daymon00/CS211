/* 
Assignment 5 : page , problem  2
Name: Daymon Wu

Write a function called deleteRepeats that has a partially filled array of characters
as a formal parameter and that deletes all repeated letters from the array. Since a
partially filled array requires two arguments, the function will actually have two
formal parameters: an array parameter and a formal parameter of type int that
gives the number of array positions used. When a letter is deleted, the remaining
letters are moved forward to fill in the gap. This will create empty positions at
the end of the array so that less of the array is used. Since the formal parameter is
a partially filled array, a second formal parameter of type int will tell how many
array positions are filled. This second formal parameter will be a call-by-reference
parameter and will be changed to show how much of the array is used after the
repeated letters are deleted. For example, consider the following code:
char a[10];
a[0] = 'a';
a[1] = 'b';
a[2] = 'a';
a[3] = 'c';
int size = 4;
deleteRepeats(a, size);
 After this code is executed, the value of a[0] is 'a', the value of a[1] is 'b', the
value of a[2] is 'c', and the value of size is 3. (The value of a[3] is no longer
of any concern, since the partially filled array no longer uses this indexed variable.)
You may assume that the partially filled array contains only lowercase letters. Embed
your function in a suitable test program.

*/
#include <iostream>
#include <string>
using namespace std;

void deleteRepeats(char a[],int& n){
for(int i=0; i<n-1; i++) //for all elements of the array
    for(int j = i+1; j<n; j++) //another instance of same array
        if(a[i] == a[j]){ //if the elements of the array match each other
            for(int k = j; k < n-1; k++) //go through elements in the array
                a[k] = a[k+1]; //and move
                n--;
                j--;
            }
}

int main(){
    char a[8]={};
    int count=8;
    int countInput = 1;
    string first = "st";
    string second = "nd";
    string third = "rd";
    string other = "th";
    string output = "";

for(int i=1;i<count + 1;i++){
    if (countInput == 1) output = first;
    else if (countInput == 2) output = second;
    else if (countInput == 3) output = third;
    else output = other;
    cout << "Enter the " << countInput << output << " letter: "<< endl; ;
    cin >> a[i];
    countInput++;
}
cout << endl;
cout << "Old Array: ";
for(int j=0;j<count;j++) cout<<a[j]<<" ";
    cout<<endl;
    deleteRepeats(a,count);
    //return new array
    cout<<"New Array: ";
for(int i=0;i<count;i++) cout<<a[i]<<" ";
    cout<<endl;
return 0;
}