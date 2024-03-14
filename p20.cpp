// recursion-factorial of a number
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    cout << "factorial of the number is " << fact(a);

    return 0;
}