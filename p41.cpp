// inheritance->forming of derived clases from the base clases
#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float sal;
    employee(int x, float y)
    {
        id = x;
        sal = y;
    }
    employee()
    {
        // this we have to form because while we defining the derived class the default constructor of the base class is called
    }
    void print();
};
void employee::print()
{
    cout << id << " " << sal << endl;
}
class programer : employee
{
public:
    string name;
    programer(int x, float y, string n)
    {
        id = x;
        sal = y;
        name = n;
    }
    void print();
};
void programer::print()
{
    cout << id << " " << sal << " " << name << endl;
}
int main()
{
    employee q(2, 2345);
    q.print();
    programer w(3, 5678, "dhanesh");
    w.print();
    return 0;
}