// parameterised constructor-
#include <iostream>
using namespace std;
class point
{
    int a, b;
    
public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "," << b << endl;
    }
};
int main()
{
    point x(2, 3);
    x.display();
    point q(4, 5);
    q.display();
    return 0;
}