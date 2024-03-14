// template with multiple parameters
#include <iostream>
using namespace std;
template <class t1, class t2>
class eg
{
public:
    t1 a;
    t2 b;
    eg(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " and " << b << endl;
    }
};

int main()
{
    eg<int, char> eg(3, 'd'); // here we can pass the two values of different datatypes
    eg.print();

    return 0;
}