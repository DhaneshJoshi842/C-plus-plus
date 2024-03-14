// #include <iostream>
// using namespace std;
// int swap(x, y);
// class s
// {
//     int a, b;
//     friend s swap(s x, s y);

// public:
//     int setdata(int val1)
//     {
//         a = val1;
//     }
//     int setdata1(int val2)
//     {
//         b = val2;
//     }
//     void display()
//     {

//         cout << a << "and" << b << endl;
//     }
// };
// int swap(s x, s y)
// {
//     int temp = x.val1;
//     x.val1 = y.val2;
//     y.val2 = temp;
// }
// int main()
// {
//     s o1, o2, b;

//     o1.setdata(2);
//     o2.setdata1(5);
//     b.display();
//     b.swap(o1, o2);
//     b.display();
// }
#include <iostream>
using namespace std;

class s
{
    int a, b;

public:
    int setdata(int val1, int val2)
    {
        a = val1;
        b = val2;
    }
    // int setdata1(int val2)
    // {
    //     b = val2;
    // }
    void display()
    {
        cout << a << " and " << b << endl;
    }

    friend s swap(s &x, s &y); // Declaration of friend function
};


s swap(s &x, s &y) // Definition of swap function
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;

    temp = x.b;
    x.b = y.b;
    y.b = temp;

    return x;
}

int main()
{
    s o1, o2;

    o1.setdata(2, 5);
    // o2.setdata1(5);

    cout << "Before swapping:\n";
    o1.display();
    // o2.display();

    swap(o1, o2);

    cout << "After swapping:\n";
    o1.display();
    // o2.display();

    return 0;
}
