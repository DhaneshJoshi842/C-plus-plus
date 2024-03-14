// virtual functions-
#include <iostream>
using namespace std;
class base
{

public:
    int var_base = 1;
    virtual void display() // this virtual function will allow the object to acsess the fn for which it was pointed to be wheather it is of another class or not
    {
        cout << "the value of var_base is:" << var_base << endl;
    }
};
class derived : public base
{

public:
    int var_derived = 2;
    void display()
    {
        cout << "the value of var_derived is:" << var_derived << endl;
        cout << "the value of var_base is:" << var_base << endl;
    }
};
int main()
{
    base *baseptr;
    base obj1;
    derived *derivedptr;
    derived obj2;
    baseptr = &obj2;
    // derivedptr = &obj1;//this gives an error because base class ptr can point obj of derived class
    // but derived class cant (may be because we inherit derived to base class not base to derived )

    baseptr->display();

    return 0;
}