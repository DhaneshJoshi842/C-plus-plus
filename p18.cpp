#include <iostream>
using namespace std;
int sum(int, int); // fn prototype

int main()
{
    int a, b;
    cout << "enter two numbers:" << endl;
    cin >> a;
    cin >> b;
    cout << "sum of both the numbers is :" << sum(a, b); // fn call and a and b are arguments or actaul parameters
    return 0;
}
int sum(int n1, int n2) // here this is fn defination and n1 and n2 are formal prameters
{
    int c = n1 + n2;
    return c;
}