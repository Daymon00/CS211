/* 
Assignment X : 
Name: Daymon Wu


*/

#include <iostream>
using namespace std;
void friendly( );
void shy(int n);
int main( )
{
friendly( );
shy(6);
cout << "One more time:\n";
shy(2);
friendly( );
cout << "End of program.\n";
return 0;
}
void friendly( )
{
cout << "Hello\n";
}
void shy(int audienceCount)
{
if (audienceCount < 5)
cout << "Goodbye\n";
}

