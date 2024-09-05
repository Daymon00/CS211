#include<iostream>
#include<string>
#include<list>
using namespace std;

struct ClassRoom{
    string Name;
    int Count;
    ClassRoom(string name, int count){
        Name = name;
        Count = count;
    }
    bool operator == (const ClassRoom& room) const{
        return this->Name = room.Name;
    }
};

//was void... instead of ostream& and no return
ostream& operator<<(ostream& COUT, ClassRoom& classroom){ //Insersion operator
    COUT << "Name" << classroom.Name << endl;
    COUT << "Count: " << classroom.Count << endl;
    return COUT;
}
struct MyCollection{
    list<ClassRoom>myChannels;

    void operator += (ClassRoom& room){
        this->myChannels.push_back(room);
    }
    void operator += (ClassRoom& room){
        this->myChannels.remove(room);
    }
};
ostream& operator<<(ostream& COUT, MyCollection& myCollection){ //Insersion operator
    for(ClassRoom classroom:myCollection.myChannels)
        COUT << classroom << endl;
    return COUT;
}

int main(){
    ClassRoom cl1 = ClassRoom("Students",20);
    ClassRoom cl2 = ClassRoom("Kok",70);
    MyCollection myCollection;
    cout << cl1 << cl2;
    myCollection += cl1; //add cl1 to vector in MyCollection
    myCollection += cl2;
    cout << myCollection;
    cin.get(); 
}