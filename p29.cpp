// friend functions-used to access the private elements out side the class
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
    void print()
    {
        cout << a << "+" << b << "i" << endl;
    }
    friend complexno sum(complexno o1, complexno o2);
};
complexno sum(complexno o1, complexno o2)
{
    cout << o1.a + o2.a << endl;
    cout << o1.b + o2.b << endl;
    complexno o3;
    o3.setno((o1.a + o2.a), (o2.b + o2.b));
    return o3;
}
int main()
{
    complexno c1, c2, s;
    c1.setno(1, 2);
    c1.print();
    c2.setno(4, 5);
    c2.print();
    s = sum(c1, c2); // we cant call the friend functions with the help of objects
    s.print();
}

