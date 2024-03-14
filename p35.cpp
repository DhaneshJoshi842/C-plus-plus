// finding the distance between two points-
#include <iostream>
#include <cmath>
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
    friend int dist(point o1, point o2);
};
int main()
{
    point p1(5, 8);
    point p2(3, 7);
    dist(p1, p2);
}
int dist(point o1, point o2)
{
    cout << "distacne is " << sqrt((o2.a - o1.a) * (o2.a - o1.a) + (o2.b - o1.b) * (o2.b - o1.b));
}
