// this pointer-
#include <iostream>
using namespace std;
class age
{
    int a;

public:
    age &get(int a) // this is the referance fn through which we can even return the objects also
    {
        this->a = a; // basically this pointer here helps in storing the value at that private variable of class (age)
        // by pointing that obj. a and also in ruturning that object
        return *this;
    }
    void print()
    {
        cout << a;
    }
};

int main()
{
    age a;
    a.get(3).print(); // here get fn will return the object so the 3 is accisible
    cout << endl;
    a.print();
    return 0;
}