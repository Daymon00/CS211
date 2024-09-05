/*
A comma-separated values or CSV file is a simple text format used to store a list
of records. A comma is used as a delimiter to separate the fields for each record.
This format is commonly used to transfer data between a spreadsheet or database.
In this Programming Project, consider a store that sells products abbreviated as A,
B, C, D, E, etc. Customers can rate each product from 1–5 where 1 is poor and 5
is excellent. The ratings are stored in a CSV file where each row contains the customer’s rating for each product. Here is a sample file with three customer ratings
and five products:
A,B,C,D,E
3,0,5,1,2
1,1,4,2,1
0,0,5,1,3
 The first line in this file format lists the products. The digit 0 indicates that a
customer did not rate a product. In this case the first customer rated A as 3, C as 5, 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 5;
double sumColumn(const double m[][SIZE], int numRows, int column){
    double sum = 0.0;
    for (int row=0; row < numRows; ++row)
        sum += m[row][column] ;
    return sum;
}

int main (){
    ifstream file("ratings.txt"); //Open the file "word.txt"
    vector<char> ratings; //Create a vector type string called "words"
    char word; //creat a temp variable called word
    while (file >> word){  //keep pushing back a word until there are no more words
        ratings.push_back(word);
    }
    file.close();

    // for (char o : ratings){ //Loop through the entrire word vector array
    //     if( o == ','||'A'||'B'||'C'||'D'||'E') o = 'a';
    //     cout<<o;
    // }

    double m[3][5] = {};
    cout << "Matrix" << endl;
    for(int x = 0; x<3; x++){
        for(int y = 0; y<5; y++){
            cin >> m[x][y];
        }
    }

      int rowSize = 5;

      for(int x= 0; x<5; x++){
       cout << "Sum of the elements at column " << char(x + 65) << " " << sumColumn(m, rowSize, x)/5 << endl;   
      }


}