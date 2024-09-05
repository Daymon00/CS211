#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Cars{
    private:
        //data members
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
    public:
    //defualtContructor
    Cars(){
        cout << "Default Constructor called" << endl;
    }
    Cars(string mname, string ftype, float m, double p){
        cout << "Parameterized Constructor called" << endl;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    Cars(Cars &obj){
        cout << "Copy Constructor called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }
    //member functions
    void setData(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    void displayData(){
        cout << "Car Properties: " << endl;
        cout << "Car Company Name: " << company_name << endl;
        cout << "Car Company Model: " << fuel_type << endl;
        cout << "Car Mileage: " << mileage << endl;
        cout << "Car Price: " << price <<  endl;
    }
    ~Cars(){
        cout << "Decontructor called" << endl;
    }
}; //always have semi colon for classes
int main(){
    Cars car1,car2("Honda","McDonalds",12000,12.5);
    // car1.setData("Toyota","Hollywood","Petrol",150000,15.5);
    Cars car3 =car1;//copy contructor
    car1.displayData();
    car2.displayData();
    car3.displayData();
    return 0;
}