// constructor overloading
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex(float y)
    {
        cout << "hi" << endl;
    }
    complex()
    {
    }

    void printf()
    {
        cout << a << "+i" << b << endl;
    }
};
int main()
{
    complex x1(2, 3);
    x1.printf();
    complex x2(7); // here this will automatically itself call the complex which is consist of one parameter because in calling their is only one parameter
    x2.printf();
    return 0;
}