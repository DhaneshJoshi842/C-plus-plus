// call by value and call by reference
#include <iostream>
using namespace std;
void swapa(int, int);
void swapb(int *, int *);
void swapc(int &, int &);
int main()
{
    int a = 1, b = 2;
    swapa(a, b); // call by value
    cout << "the value of a is " << a << " the value of b is " << b << endl;
    swapb(&a, &b); // call using pointer reference
    cout << "the value of a is " << a << " the value of b is " << b << endl;
    swapc(a, b); // call using refrence variables
    cout << "the value of a is " << a << " the value of b is " << b << endl;
}
void swapa(int a, int b)
{
    int x = a;
    a = b;
    b = x;
}
void swapb(int *a, int *b)
{

    int x = *a;
    *a = *b;
    *b = *a;
}
void swapc(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}
