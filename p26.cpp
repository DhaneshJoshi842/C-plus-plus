// static function-it can only stores value of static variables
#include <iostream>

using namespace std;
class student
{
    static int count;

public:
    static void nameandid();
};
int student::count;
int main()
{
    int n;
    cout << "enter no. of sets:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        student::nameandid();
    }
}

void student::nameandid()
{
    int n;
    cout << "enter no of students:" << endl;
    cin >> n;
    string name[n];
    int id[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter name:" << endl;
        cin >> name[i];
        cout << "enter id:" << endl;
        cin >> id[i];
    }
    for (int i = 0; i < n; i++)
    {
        count++;
        cout << "name is: " << name[i] << " id is:" << id[i] << " and count is:" << count << endl;
    }
}