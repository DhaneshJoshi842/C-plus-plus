#include <iostream>
using namespace std;
struct employe
{
    int id;
    float sal;
    char name[10];
};

int main()
{
    int size;
    cout << "how much employe you have:";
    cin >> size;
    struct employe ep[size];
    cout << "enter name of the employes:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ep[i].name;
    }
    cout << "enter their id respectively:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ep[i].id;
    }
    cout << "enter their salary respetively:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ep[i].sal;
    }
    cout << "details of the employes are as follows:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "*";
        cout << "name of the employe" << i + 1 << " is " << ep[i].name << endl;
        cout << "id of the employe" << i + 1 << " is " << ep[i].id << endl;
        cout << "salary of the employe" << i + 1 << " is " << ep[i].sal << endl;
    }
}