// virtual class-
// sports-->exam,sports-->result
#include <iostream>
using namespace std;
class student
{
protected:
    int rollno = 35;
};
class exam : virtual public student
{
protected:
    float math, phy;

public:
    void marks(float x, float y)
    {

        math = x;
        phy = y;
        cout << rollno << " rollno gets " << x << " marks in math and " << y << " marks in physics" << endl;
    }
};
class sports : virtual public student
{
protected:
    int s;

public:
    void score(int l)
    {
        s = l;
        cout << rollno << " scores " << l << " marks in sports" << endl;
    }
};
class result : public exam, public sports
{
public:
    void total()
    {
        float t = math + phy + s;

        cout << "the total marks of " << rollno << " rollno are: " << t << endl;
    }
};

int main()
{
    result r;
    r.marks(100, 91);
    r.score(8);
    r.total();
    return 0;
}