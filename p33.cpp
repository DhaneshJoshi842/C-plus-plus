// default constructor-
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(); // constructor declaration
    void print()
    {
        cout << a << "+i" << b << endl;
    }
};
complex::complex() // this is default constructor it takes no parameter
{
    a = 10;
    b = 23;
}

int main()
{
    complex x;
    x.print();
    return 0;
}