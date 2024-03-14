// fn templates
#include <iostream>
using namespace std;
template <class t1, class t2>
float avg(t1 x, t2 y) // avg is template fn where t1 and t2 are any costum datatypes
{
    float av = (x + y) / 2.0;
    return av;
}

int main()
{
    float a;
    a = avg(5, 3.8);
    cout << "the average of the numbers is :" << a << endl;

    return 0;
}