// multilevel inheritance-
#include <iostream>
using namespace std;
class rolln
{
protected:
    int rollno;

public:
    void set_roolno(int);
    void get_rollno();
};
void rolln::set_roolno(int x)
{
    rollno = x;
}
void rolln::get_rollno()
{
    cout << "roll no. is: " << rollno << endl;
}
class marks : public rolln
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void marks::set_marks(float x, float y)
{
    maths = x;
    physics = y;
}
void marks::get_marks()
{
    cout << "marks is physics are: " << physics << " and marks in maths are: " << maths << endl;
}
class result : public marks
{
public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << "percentage are:" << (maths + physics) / (2) << endl;
    }
};

int main()
{
    int rl;
    float m, p;
    cout << "enter roll no:" << endl;
    cin >> rl;
    cout << "enter math and phy marks" << endl;
    cin >> m >> p;

    result r;
    r.set_roolno(rl);
    r.set_marks(m, p);
    r.display();
    return 0;
}