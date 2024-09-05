/* 
Assignment 4 : page 181, problem 1
Name: Daymon Wu

2. The area of an arbitrary triangle can be computed using the formula
Area = 2s1s - a2 1s - b2 1s - c2
 where a, b, and c are the lengths of the sides, and s is the semiperimeter:
s = 1a + b + c2 >2
 Write a void function that uses five parameters: three value parameters that provide the lengths of the edges and two reference parameters that compute the area
and perimeter (not the semiperimeter). Make your function robust. Note that not
all combinations of a, b, and c produce a triangle. Your function should produce
correct results for legal data and reasonable results for illegal combinations.

*/

#include <iostream>
#include <cmath>
using namespace std;

void computeTriangle(double a1, double b1, double c1, double& area1, double& perimeter1){
    double s;
    //to calculate perimeter and area
    perimeter1 = a1 + b1 + c1;
    s = perimeter1 / 2;
    area1 = sqrt(s*(s-a1)*(s-b1)*(s-c1)); //formula with square root function
}
int main( )
{
    double a, b, c; //a, b, and c are the lengths of the sides of a triangle
    double area, perimeter;
    cout << "Please provide the lengths of the edges of a triangle:\n";
    cin >> a >> b >> c; //input user one by one
    
    
    if (((a + b) > c) && ((b + c) > a) && (( a + c) > b)){ //if these conditions do not meet then it is not a triangle
        computeTriangle(a, b, c, area, perimeter);
        cout << "Area of triangle = " << area << endl;
        cout << "Perimeter of triangle = " << perimeter << endl;

    }
    else{
        cout << "The input values cannot form a triangle. Bye!!" << endl;
        return 0;
    }
    return 0;
}