// manipulators-endl,swtw;
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 1, b = 22, c = 333, d = 4444;
    cout << "value of a is:" << setw(4) << a << endl;
    cout << "value of b is:" << setw(4) << b << endl;
    cout << "value of c is:" << setw(4) << c << endl;
    cout << "value of d is:" << setw(4) << d << endl;
}