/*Create a class named Student that has three member variables:
 name – A string that stores the name of the student
 numClasses – An integer that tracks how many courses the student is currently enrolled in
 classList – A dynamic array of strings used to store the names of the
classes that the student is enrolled in
 Write appropriate constructor(s), mutator, and accessor functions for the class
along with the following:
 • A function that inputs all values from the user, including the list of class names.
This function will have to support input for an arbitrary number of classes.
 • A function that outputs the name and list of all courses.
 • A function that resets the number of classes to 0 and the classList to an
empty list.
 • An overloaded assignment operator that correctly makes a new copy of the list
of courses.
 • A destructor that releases all memory that has been allocated.
 Write a main function that tests all of your functions.
 */
#include <iostream>
using namespace std;
class Student{
    private:
        int numClasses;
        string name;
        string *classList;
    public:
        Student(){
            numClasses = 0;
            name = "";
            classList = nullptr;
        }
        void setName(string nm) { 
            name = nm; 
        }
        void setNumOfClasses(int num) { 
            numClasses = num; 
        }
        string getName() { 
            return name; 
        }
        int getNumClasses() { 
            return numClasses; 
        }
        string getClassName(int i) { 
            return classList[i]; 
        }
        void Input(){
            cout <<"Enter the student's name: ";
            cin >> name;
            cout <<"Enter # of classes: ";
            cin >> numClasses;
            classList = new string[numClasses];
            for(int i = 0; i < numClasses; i++){
                cout <<"Enter name of class" <<i+1 <<" : ";
                cin >> classList[i];
            }
        }
        Student& operator=(Student other){
            name = other.getName();
            numClasses = other.getNumClasses();
            classList = new string[numClasses];
            for(int i = 0; i < numClasses; i++)classList[i] = other.getClassName(i);
            return *this;
        }
        void Output(){
            cout <<"Name: " <<name <<endl;
            cout <<"Number of classes: " <<numClasses <<endl;
            for(int i = 0; i < numClasses; i++)
            cout <<"Class " <<i+1 <<" : " <<classList[i] <<endl;
        }
        void Reset(){
            delete[] classList;
            numClasses = 0;
        }
};
int main(){
    Student student1;
    student1.Input();
    cout  << "Student 1: " <<endl;
    student1.Output();
    student1.Reset();
    cout  << "Student 1 after reset:"  << endl;
    student1.Output();
}

/*
To anwer this question I started by making a class called student with 3 vaibles
numClass, name, and a pointer to class list because it is a dynmaic array for how many class the user wants to input.
After that in the public function I made a default contructor student() wtiht the 3 basic parameters needed for this problem.
There are different tasks I need to do in this program which is setting the name(setName), setting the number of classes,
and also getting them back into the program i need getMethods. I also have an Input function that I can call so my main function
will not be so cluttered. Because i am familiar with the operator function I used it set a students varaiable equal to another student
which is also the same as copying the user input to another student. The output function outputs, theres not uch to say about that one.
Reset function is called to delete the classList array and to set the numClass back to 0. A decontructor could have also been used.
*/

// #include <iostream>
// using namespace std;
// class Student{
//     private:
//         string name;
//         int numClasses;
//         string *classList;
// public:
//     Student(){
//         name = "";
//         numClasses = 0;
//         classList = nullptr;
//     }
//     void setName(string nm) { 
//         name = nm; 
//     }
//     void setNumOfClasses(int num) { 
//         numClasses = num; 
//     }
//     string getName() { 
//         return name; 
//     }
//     int getNumClasses() { 
//         return numClasses; 
//     }
//     string getClassName(int i) { 
//         return classList[i]; 
//     }
//     void Input(){
//         cout <<"Enter student name: ";
//         cin >> name;
//         cout <<"Enter number of classes: ";
//         cin >> numClasses;
//         classList = new string[numClasses];
//         for(int i = 0; i < numClasses; i++)        {
//         cout <<"Enter name of class" <<i+1 <<": ";
//         cin >> classList[i];
//         }
//     }
//     Student& operator=(Student other){
//         name = other.getName();
//         numClasses = other.getNumClasses();
//         classList = new string[numClasses];
//         for(int i = 0; i < numClasses; i++)classList[i] = other.getClassName(i);
//         return *this;
//     }
//     void Output(){
//         cout <<"Name: " <<name <<endl;
//         cout <<"Number of classes: " <<numClasses <<endl;
//         for(int i = 0; i < numClasses; i++)
//         cout <<"Class " <<i+1 <<": " <<classList[i] <<endl;
//     }
//     void Reset(){
//         delete[] classList;
//         numClasses = 0;
//     }
// };
// int main(){
//     Student student1, student2;
//     student1.Input();
//     cout  << "Student 1's data: " <<endl;
//     student1.Output();
//     student2 = student1;
//     cout  << "Student 2's data after assignment from student 1:" <<endl;
//     student2.Output();
//     student1.Reset();
//     cout  << "Student 1's data after reset:"  << endl;
//     student1.Output();
//     cout  << "Student 2's data, should still have original classes: "  << endl;
//     student2.Output();
// }