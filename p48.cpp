// using contructor in inherited classes-
#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 constructor called:" << endl;
    }
    void show()
    {
        cout << "value of data1 is: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 constructor is called: " << endl;
    }
    void show()
    {
        cout << "value of data2 is: " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "derived class constructor called:" << endl;
    }
    void show()
    {
        base1::show();
        base2::show();
        cout << "value of data3 is " << data3 << endl;
        cout << "value of data4 is " << data4 << endl;
    }
};

int main()
{
    derived d(1, 2, 3, 4);
    d.show();
    return 0;
}