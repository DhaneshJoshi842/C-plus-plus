// destructor-
#include <iostream>
using namespace std;

void fun();

class num
{
    int c = 0;

public:
    num()
    {
        cout << "hello const." << endl;
        c++;
        cout << c << endl;
    }

    ~num()
    {
        cout << "hello dist." << endl;
        // c--;
        // cout << c << endl;
    }
    void print()
    {
        cout << c << endl;
        }
};
int main()
{
    num x;
    // x.print();
    
    void fun();
}

void fun()
{
    num y;
    y.print();
}