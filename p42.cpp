//single inheritance-
#include <iostream>
using namespace std;
// remember we cant form the object of the base class the accising
class base
{

    int data1;

public:
    int data2;
    void setdata();
    int setdata1();
};
void base::setdata()
{
    data1 = 6;
    data2 = 8;
}
int base ::setdata1()
{

    return data1;
}

class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * setdata1(); // we forms the funvtion here to get the return value from setdata1 because data1 is private variable in base class
        cout << setdata1() << endl;
        cout << data2 << endl;
        cout << data3 << endl;
    }
};
int main()
{
    derived d;
    d.setdata();
    d.setdata1();
    d.process();
    return 0;
}