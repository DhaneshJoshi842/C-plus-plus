// passing object as an argument
#include <iostream>
using namespace std;
class complexno
{
    int a, b;

public:
    void setno(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printno()
    {
        cout << a << "+" << b << "i" << endl;
    }
    void sum(complexno o1, complexno o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b; 
    }
};
int main()
{
    complexno c1, c2, c3;
    c1.setno(1, 2);
    c1.printno();
    c2.setno(3, 4);
    c2.printno();
    c3.sum(c1, c2);
    c3.printno();
}