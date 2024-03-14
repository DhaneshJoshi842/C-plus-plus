// here we see about different kind of operators
#include <iostream>
using namespace std;
void arithematic();
void assignment();
void comparision();
void logical();
int main()
{
    arithematic();
    assignment();
    comparision();
    logical();
}
void arithematic()
{
    int a = 1, b = 2;
    cout << "a+b is " << a + b << endl;
    cout << "a-b is " << a - b << endl;
    cout << "a*b is " << a * b << endl;
    cout << "a/b is " << a / b << endl;
    cout << "a%b is " << a % b << endl; // gives remiander
    cout << "a++ is " << a++ << endl;   // post increament
    cout << "++a is " << ++a << endl;   // pre increament
    cout << "++a is " << a-- << endl;   // post decreament
    cout << "++a is " << --a << endl;   // pre decreament
}
void assignment()
{
    int a = 3; // here = is assignment operator
    cout << "a is " << a << endl;
}
void comparision()
{
    int a = 4, b = 3;
    cout << "a==b is " << (a == b) << endl;
    cout << "a!=b is " << (a != b) << endl;
    cout << "a>=b is " << (a >= b) << endl;
    cout << "a<=b is " << (a <= b) << endl;
    cout << "a>b is " << (a == b) << endl;
    cout << "a<b is " << (a == b) << endl;
}
void logical()
{
    int a = 7, b = 4;
    cout << "a==b && a>b is " << (a == b && a > b) << endl; // logical and
    cout << "a==b || a>b is " << (a == b || a > b) << endl; // logical or
    cout << "!(a==b) is " << (!(a == b)) << endl;           // logical not
}