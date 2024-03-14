// switch case
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
    {
        cout << "you are of 18";
        break;
    }
    case 22:
    {
        cout << "you are of 22";
        break;
    }
    default:
    {
        cout << "not valid age";
        break;
    }
    }
}