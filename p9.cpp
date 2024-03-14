//litersls
#include <iostream>
using namespace std;
int main()
{
    cout << "size of 3.14 is " << sizeof(3.14) << endl;   // by default consider as double
    cout << "size of 3.14f is " << sizeof(3.14f) << endl; // here f is float literal which convert double into floating value
    cout << "size of 3.14l is " << sizeof(3.14l) << endl; // here l is long literal which convert double into long value
    
}
