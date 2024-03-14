// pointers to derived class-(run time polymorphism)
#include <iostream>
using namespace std;
class base
{

public:
    int var_base;
    void display()
    {
        cout << "the value of var_base is:" << var_base << endl;
    }
};
class derived : public base
{

public:
    int var_derived;
    void display()
    {
        base::display();
        cout << "the value of var_derived is:" << var_derived << endl;
    }
};
int main()
{
    base *baseptr;
    base obj1;
    baseptr = &obj1;
    baseptr->var_base = 34; // it is also a way to initialize the variable using pointr
    baseptr->display();
    derived *derivedptr;
    derived obj2;
    derivedptr = &obj2;
    derivedptr->var_base = 56;
    derivedptr->var_derived = 35;

    derivedptr->display();

    return 0;
}
