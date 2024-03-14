// copy constructor
#include <iostream>
using namespace std;
class number
{
    int a, b;

public:
    number()
    {
        a = 0;
    }
    number(number &obj) // copy constructor-which can copy value of another objects
    {
        a = obj.a;
        cout << "copy constructor invoaked!!!.." << endl;
    }
    number(int x)
    {
        a = x;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    number l, m, n(23), n2;
    l.display();
    m.display();
    n.display();
    number n1(n); // remeber always a separate declaration is given to the object of copy constructor
    n1.display();
    n2 = n;        // here copy constructor doesnt invoaked because separate declaration should be given;
    number n3 = n; // here it will be invoaked because separate declaration is provided

    return 0;
}
