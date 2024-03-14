// constructor with default arguments
#include <iostream>
using namespace std;
class data
{
    int d1, d2;

public:
    data(int x, int y = 8)
    {
        d1 = x;
        d2 = y;
    }
    void printf()
    {
        cout << "(" << d1 << "," << d2 << ")" << endl;
    }
};
int main()
{
    data p1(1, 2);
    p1.printf();
    data p2(1); // in this case by default value of y(8) is considered because value for b is not passed
    p2.printf();
    return 0;
}