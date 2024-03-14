// doing some tasks related binary no.
#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read();
    int cheq_bin();
    void compli();
};
int main()
{
    int x;
    binary b;
    b.read();
    x = b.cheq_bin();
    if (x == 0)
    {
        b.compli();
    }
}
void binary::read()
{

    cout << "enter a number:";
    cin >> s;
}
int binary::cheq_bin()
{
    int a = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "number is not binary" << endl;
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "the number is binary" << endl;
    }
    return a;
}
void binary::compli()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            cout << '0';
        }
        else
        {
            cout << '1';
        }
    }
}
