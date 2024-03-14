// initialization of constructor valiables
#include <iostream>
using namespace std;

class eg
{
    int a, b;

public:
    // coment out one by one and cheq all the cases given below-
    //  eg(int i, int j) : a(i), b(j)
    eg(int i, int j) : a(i), b(j + i)
    // eg(int i, int j) : a(i), b(a+j)
    // eg(int i, int j) : b(j), a(i + b)//--->red falg this will gives an error because in
    // starting (just above public:) we initialize a first and here we acccesing a secondry

    {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
    friend class ex;
};
class ex
{
};

int main()
{
    eg x(1, 2);
    return 0;
}