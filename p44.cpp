// multiple inheritance-
#include <iostream>
using namespace std;
class base1
{

protected:
    int base1int;

public:
    void set_base1(int);
};
void base1::set_base1(int x)
{
    base1int = x;
}
class base2
{
protected:
    int base2int;

public:
    void set_base2(int);
};

void base2::set_base2(int y)
{
    base2int = y;
}
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the sum of both the numbers is :" << base1int + base2int << endl;
    }
};
int main()
{
    derived d;
    d.set_base1(5);
    d.set_base2(3);
    d.show();
    return 0;
}
