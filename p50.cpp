// using pointers as an object and use of arrow operator->
#include <iostream>
using namespace std;
class ex
{
public:
    void hello()
    {
        cout << "hello sir ji" << endl;
    }
};

int main()
{
    int *p = new int(5);
    cout << *p << endl;
    // using pointer as an object
    ex e;
    ex *ptr = &e;
    (*ptr).hello();
    // arrow operator-
    ex *ptr1;      // now this syntax dynamically create an obj of ex class
    ptr1->hello(); // this will show that call the hello fn

    return 0;
}