#include <iostream>
using namespace std;

class comp
{
    int a, b, r;
    friend int compreal(comp o1, comp o2);
    friend int compcomp(comp o1, comp o2);

public:
    void setno(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setr(int v)
    {
        r = v;
    }
    void print()
    {
        cout << r;
    }
};

int compreal(comp o1, comp o2)
{
    return (o1.a + o2.a);
}

int compcomp(comp o1, comp o2)
{
    return (o1.b + o2.b);
}

int main()
{
    comp c1, c2, c3;
    c1.setno(1, 2);
    c2.setno(3, 4);
    c3.setr(compreal(c1, c2));
    c3.print(); // Output: 6
    c3.setr(compcomp(c1, c2));
    c3.print(); // Output: 7
}
