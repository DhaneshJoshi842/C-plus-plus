// static variable
#include <iostream>
using namespace std;
class employee
{
    static int sn; // static variables are by default initialized by 0

public:
    int id, sal;
    void idandsal()
    {
        cout << "enter the id:" << endl;
        cin >> id;
        cout << "enter the salary:" << endl;
        cin >> sal;
        sn++;
    }
    void op()
    {
        cout << sn << ".the salary of enployee " << sn << " is " << sal << " and the id is " << id<<endl;
    }
};
int employee::sn; // two times initialisation is compulsory and here we can also change the value of that variable but in class it is by default 0
int main()
{
    employee emp;
    int n;
    cout << "enter no. of employee:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp.idandsal();
        emp.op();
    }
}
