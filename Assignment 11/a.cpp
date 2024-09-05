/*
Towers of Hanoi. There is a story about Buddhist monks who are playing this
puzz
le with 64 stone disks. The story claims that when the monks finish moving
the disks from one post to a second via the third post, time will end. Eschatology
(concerns about the end of time) and theology will be left to those better qualified;
our interest is limited to the recursive solution to the problem.
 A stack of n disks of decreasing size is placed on one of three posts. The task is to
move the disks one at a time from the first post to the second. To do this, any disk
can be moved from any post to any other post, subject to the rule that you can
never place a larger disk over a smaller disk. The (spare) third post is provided to
make the solution possible. Your task is to write a recursive function that describes
instructions for a solution to this problem. We do not have graphics available, so
you should output a sequence of instructions that will solve the problem.
 Hint: If you could move n-1 of the disks from the first post to the third post using
the second post as a spare, the last disk could be moved from the first post to the
second post. Then by using the same technique (whatever that may be), you can
move the n-1 disks from the third post to the second post, using the first post
as a spare. There! You have the puzzle solved. You have only to decide what the
nonrecursive case is, what the recursive case is, and when to output instructions
to move the disks.
*/
#include<iostream>
using namespace std;
void towers(int a,char s,char d,char z){ //function towers
    if(a==1) cout <<"Disk "<< z <<" move from "<< s <<" to "<< d <<endl; //bases case
    else{
        towers(a-1,s,z,d);
        cout<<"Disk "<< z <<" moving from "<< s <<" to "<< d << endl;
        towers(a-1,z,d,s);
    }
}
int main(){
    int a; //variable for user input
    cout << "Enter number of disks: " ; //Ask the user to input the number of disks
    cin >> a; //assign a the input of the user
    cout << endl;
    towers(a,'A','C','B'); //call the function where a is the amount of time the fucntion is recalled within the function
    system("pause");
}
