// templates with default parameters
#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char> // now these t1,t2 and t3 are default costom datatypes
class eg
{
    t1 a;
    t2 b;
    t3 c;

public:
    eg(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void print()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};

int main()
{
    eg</*no need to mention any data type here */> eg(1, 2.3, 'd');
    eg.print();

    return 0;
}