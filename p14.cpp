// note=learn about 3 kinds of loop in cpp from notebook
// pointrs,pointer to pointer
#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *b = &a;
    cout << "adress of a is " << b << endl;
    cout << "value at adress of a is " << *b << endl;
    int **c = &b; // c is pointer to pointer
    cout << "adress of b is " << c << endl;
    cout << "value at adress b is " << *c << endl;
    cout << "value at value present on adress b is " << **c << endl;

    return 0;
}