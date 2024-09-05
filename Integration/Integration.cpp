#include <iostream>
#include <cmath>
using namespace std;

//Make FUNC thats a pointer that takes doubles and returns doubles
typedef double (*FUNC)(double);
//Function called Integrate that takes in another function and two other variables
double integrate(FUNC f, double a, double b){
    //Initalize a floating point number called sum
    double sum = 0.0;
    //Initalize a floating point number called y
    double y;
    //Set i = 1(the start of line); and when i is less than the finish point(b); keep incrementing i by 0.0001 till we get to b
    for(double i = a; i < b; i += 0.0001){
        //y = (take the ans to the function of a)  FOR INSTANCE i = 1
        y = f(i);   
        //keep adding the function of i to 0.0001 to sum
        sum += y * 0.0001;
    }
    //return sum
    return sum;
}

double line(double x){
    return x;
}
double square(double x){
    return x * x;
}
double cube(double x){
    return x * x * x;
}

int main(){

cout << "The integral of f(x) = x between 1 and 5 is: " << integrate(line, 1, 5) << endl;

cout << "The integral of f(x) = x^2 between 1 and 5 is: " << integrate(square, 1, 5) << endl;

cout << "The integral of f(x) = x^3 between 1 and 5 is: " << integrate(cube, 1, 5) << endl;

}