// recursion-fabonacci series
#include <iostream>
using namespace std;
int fab(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fab(n - 2) + fab(n - 1);
}
int main()
{
    int a;
    cout << "which nth no. do you want to print of fabonacci" << endl;
    cin >> a;
    cout << "the number is " << fab(a);
}