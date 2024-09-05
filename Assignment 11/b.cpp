/*
Write a program that uses recursion to implement the DFA. Your program should
have a separate function for each state in the DFA. Each function should invoke
the function corresponding to the next state indicated by the arrows in the diagram. There is mutual recursion because of the loop from state 7 to state 4. Test
your solution with several strings and output whether each string is a properly
formatted monetary amount.

This solution calls a function for every character in the string. However, the solution may be written in a tail-recursive manner, so it is possible that long strings will
not exhaust the stack if your compiler is efficient.
*/

#include <iostream>
using namespace std;
void checkSign(char* arr){ //This function is to check the arr for a dollar sign
    if (arr[0] != '$') { //if the first element is not $ then...
        cout << "'" << endl;
        for ( int i = 0; i < sizeof(arr); i++){ //out put the arr
            cout << arr[i];
        }
        cout << "'" << endl;
        cout << "'Missing $'" << endl; //and note that the arr is missing a $
    }
}
string addCommas(int n){  //recurive function that is supposed to change the number into a money format with commas in every 3 places
    string s = to_string(n);
    if (s.size() < 4) return s;//base cse
    else {                                  //I DID NOT GET THIS FUNCITON TO WORK YET
        string tack_on = "," + s.substr(s.size() - 3, s.size());
        return addCommas(n / 1000) + tack_on; //concatonate the next three chars
    }
}
string convertToString(char* a){ //converts the char array to string
    string s = a;
    return s;
}
int main(){
    char arr[] = {}; //lchar arr
    int n = 0;
    vector<int>power;

    words.push_back(word);

    cout << "Enter any amount of money: " << endl;
    cin >> n; //take the usre input and into a char array
    checkSign(arr); //check if there is sign
    string s_arr = convertToString(arr); //convert
    string addCommas(arr); //so we can use it in this fucntion
    return 0;
}
