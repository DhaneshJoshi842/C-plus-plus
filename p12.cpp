// if else
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your salary" << endl;
    cin >> a;
    if (a > 0 && a <= 20000)
    {
        cout << "you are just beginner";
    }
    else if (a > 20000 && a <= 100000)
    {
        cout << "your salary is quite good";
    }
    else
    {
        cout << "your salary is very good";
    }
}