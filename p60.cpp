// template-
#include <iostream>
using namespace std;
template <class t> // now this t is used as an datatype in whole program
class product
{
public:
    t a;
    t b;

public:
    void dotproduct(t x, t y) // here t is data type which can be (int,float,char,double)
    {
        a = x;
        b = y;
    }
    void print()
    {
        t c = a * b;
        cout << "the product is:" << c << endl;
    }
};

int main()
{
    product<int> o1;
    o1.dotproduct(3, 4);
    o1.print();
    product<float> o2;
    o2.dotproduct(3.5, 4.2);
    o2.print();

    return 0;
}