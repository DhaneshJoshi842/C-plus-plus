#include <iostream>
using namespace std;
// class DemoSF
// {
// private:
//     static int a, b;

// public:
//     static void myfun()

//     {
//         cout << "Value of a & b: " << a << endl
//              << b << endl;
//     }
// };
// int DemoSF ::a = 10;
// int DemoSF ::b = 20;
// int main()
// {
//     DemoSF a, b;
//     a.myfun();
//     b.myfun();
//     return 0;
// }
class demooverload
{
public:
    int count;

public:
    demooverload() : count(50) {}
    // Overload ++ when used as prefix
    void operator++()
    {
        ++count;
    }
    void show()
    {
        cout << "counter variable : " << count << endl;
    }
};
int main()
{
    demooverload ob1;
    ++ob1;
    ob1.show();
    return 0;
}