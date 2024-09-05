/* 
Assignment 3 : page 140, problem 4
Name: Daymon Wu

The  gravitational  attractive  force  between  two  bodies  with  masses  m1  and  m2 
separated by a distance d is given by the following formula:
F =Gm1m2
d2  where G is the universal gravitational constant:
G = 6.673 * 10-8 cm3>(g • sec2)   Write  a  function  definition  that  takes  arguments  for  the  masses  of  two  bodies  
and the distance between them and returns the gravitational force between them. 
Programming Projects            141
Since you will use the previous formula, the gravitational force will be in dynes. 
One dyne equals a
g • cm/sec2
  You should use a globally defined constant for the universal gravitational constant. 
Embed your function definition in a complete program that computes the gravita-
tional force between two objects given suitable inputs. Your program should allow 
the user to repeat this calculation as often as the user wishes

*/

#include <iostream>
#include <cmath>

using namespace std;
//constant does not change
const double g = 6.673 * pow(10, -8); //pow is 10^-8
//function for answer
double answer(double m1, double m2, double d){  
  return g * m1 * m2 / (d * d); //formula
}

int main(){
  double m1, m2, d;//mass and distance
  char ch;//for i bool statemnt
    while (true){
      cout << "Enter number for mass 1: ";//output
      cin >> m1;//user input

      cout << "Enter number for mass 2: ";//output
      cin >> m2;//user input

      cout << "Distance between two objects: ";//output
      cin >> d;//user input

      cout << "Force between objects is: " << answer(m1, m2, d) << " dyne" << endl; //output with function answer
      cout << "Try again?: y for yes, n for no: ";//output
      cin >> ch;//user input
      
    if (ch == 'n'){//if user input is n "end" or break
      break;  //else reture to beginning for while loop
    }
  }
return 0;
}