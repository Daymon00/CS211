/* 
Assignment 2 : page 96, problem 4
Name: Daymon Wu

Write a program that finds and prints all of the prime numbers between 3 and 100.
A prime number is a number that can only be divided by one and itself (i.e., 3, 5,
7, 11, 13, 17, . . .).
 One way to solve this problem is to use a doubly-nested loop. The outer loop can
iterate from 3 to 100, while the inner loop checks to see whether the counter value
for the outer loop is prime. One way to decide whether the number n is prime is
to loop from 2 to n − 1; if any of these numbers evenly divides n, then n cannot be
prime. If none of the values from 2 to n − 1 evenly divide n, then n must be prime.
(Note that there are several easy ways to make this algorithm more efficient.)

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool prime = true; //true or false (if prime)
    for (int x = 3; x <= 100; x++){ //going through all numbers between 3 - 100
        bool prime = true; //in the loop for each number set prime to true unless otherwise
        for (int y = 2; y <= (x - 1); y++){ //goes through and tests for whole numbers that will divide to x
            if ((x % y) == 0){ //if there is no remainder
                prime = false; //it is not prime
                break; //if there is then break out the loop and output the prime numbers
            }
        }
    if (prime == true) cout << x << endl; //if the number is prime then output and go back to the for loop and test for next number
    }

return 0;
}
