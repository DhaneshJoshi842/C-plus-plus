/* in this program we made functions and and
check their precedence*/
#include <iostream>
using namespace std;
int sum1(); // fn declaration or fn prototype
int sum2();
int a = 12;
int main()
{
    int a = 3;
    cout << "a in main is " << a;
    a = sum1(); // fn calling
    cout << "\na in funtion sum1 is " << a;
    a = sum2();
    cout << "\na in funtion sum2 is " << a;
}
int sum1() // fn defination
{
    int a = 8;
    return a;
}
int sum2()
{
    return a;
}
