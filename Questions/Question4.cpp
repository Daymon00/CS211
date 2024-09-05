/*
Define a Pet class that stores the pet’s name, age, and weight. Add appropriate
constructors, accessor functions, and mutator functions. Also define a function
named getLifespan that returns a string with the value “unknown lifespan.”
 Next, define a Dog class that is derived from Pet. The Dog class should have a
private member variable named breed that stores the breed of the dog. Add mutator and accessor functions for the breed variable and appropriate constructors.
Redefine the getLifespan function to return “Approximately 7 years” if the dog’s
weight is over 100 pounds and “Approximately 13 years” if the dog’s weight is
under 100 pounds.
 Next, define a Rock class that is derived from Pet. Redefine the getLifespan
function to return “Thousands of years.”
 Finally, write a test program that creates instances of pet rocks and pet dogs that
exercise the inherited and redefined functions.
*/
#include <iostream>
using namespace std;

class Pet {
    public:
        string name;
        double weight;
        Pet(){}
        Pet(string nm, double wght) {
            name = nm;
            weight = wght;
        }
        virtual string getName() {
            return name;
        }
        virtual double getWeight() {
            return weight;
        }
        virtual void setName(string nm) {
            name = nm;
        }
        virtual void setWeight(double wght) {
            weight = wght;
        }
        virtual string getLifespan() {
            return "unknown lifespan";
        }
};
class Dog : public Pet{
        private:
            string breed;
        public:
            Dog(){}
            Dog(string nm, double wght, string b): Pet(nm, wght), breed(b) {}
            string getBreed() {
                return breed;
            }
            void setBreed(string b) {
                breed = b;
            }
            string getLifespan() {
                if(weight >= 100) {
                    return "About 7 years";
                } else {
                    return "About 13 years";
                }
            }
};

int main() {
    string name, b;
    double wght;
    int number;
    Pet pt;
    Dog *dog;
    cout << "Name of pet: ";
    cin >> name;
    pt.setName(name);
    cout << "Weight of pet: ";
    cin >> wght;
    pt.setWeight(wght);
    cout << pt.getLifespan() << endl;
    cout << "# of dogs: ";
    cin >> number;
    Dog *dogs = new Dog[number];
    for(int i=0; i<number; i++) {
        cout << "Enter name of pet: ";
        cin >> name;
        cout << "Enter weight of pet: ";
        cin >> wght;
        cout << "Enter breed of pet: ";
        cin >> b;
        dogs[i].setName(name);
        dogs[i].setWeight(wght);
        dogs[i].setBreed(b);
    }
    for(int i=0; i<number; i++) {
        cout << "Lifespan Of Dog" << i <<": " << dogs[i].getLifespan() << endl;
    }
    delete [] dogs;
}
/*
To answer this question I startedby initailaing a class called Pet. The 
Class pets the basic get and set functions needed. This class is inherited by the dog class and 
The use of "virtual" so it is easier for the dog function to get the same functions from pet class.
We do this so we do not have to keepo reapeating or rewrting the same fucntions.
In the dog function now it inherites the pet class so it has access to all of its functions.
This data we get from the main functions and in the main function the dog is a dynamic array so
user chooses what that is.
*/