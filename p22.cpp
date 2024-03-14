#include <iostream>
using namespace std;
class animal
{
private:
    int a, b, c;

public:
    int d, e;
    int setdata(int a1, int b1, int c1);
    void getdata()
    {

        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
        cout << "c is " << c << endl;
        cout << "d is " << d << endl;
        cout << "e is " << e << endl;
    }
};

int main()
{
    animal dog;
    dog.setdata(1, 2, 3);
    dog.d = 4;
    dog.e = 5;
    dog.getdata();
    // int x = dog.setdata(1, 2, 3);
    cout << dog.d;
    return 0;
}
int animal::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;

    return a;
}
