#include <iostream>
#include <vector>
using namespace std;

int main(){
    
vector <int> data = {1,2,3,4,5};
data.push_back(12);
data.push_back(12);
data.push_back(12);

for( int i = 0; i < data.size(); i ++){
    cout << data[i] << endl;
}
}

//Nothing is outputted because of the if statement
//