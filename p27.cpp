// object array
#include <iostream>
using namespace std;
class employee
{
    int sal;

public:
    void setdata()
    {
        cout << "enter the salary of the employe:" << endl;
        cin >> sal;
    }
    void getdata()
    {
        cout << "salary of the employee is " << sal << endl;
    };
};
int main()
{
    int n;
    cout << "enter no. of employee:";
    cin >> n;
    employee emp[n];
    for (int i = 0; i < n; i++)
    {
        emp[i].setdata();
    }
    for (int i = 0; i < n; i++)
    {

        emp[i].getdata();
    }
    return 0;
}