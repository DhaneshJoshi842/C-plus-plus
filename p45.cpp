// project-
#include <iostream>
#include <cmath>
using namespace std;
class simplecalc
{
protected:
    int a;
    int b;
    char c;
    int op1;

public:
    void process1(int x, int y, char z)
    {
        a = x;
        b = y;
        c = z;
        if (c == '+')
        {
            op1 = a + b;
        }
        else if (c == '-')
        {
            op1 = a - b;
        }
    }
};
class scientificcalc : public simplecalc
{
protected:
    float op2;

public:
    void process2(string s)
    {
        if (s == "sin" && c == '+')
        {
            op2 = sin(a) + sin(b);
        }
        else if (s == "sin" && c == '-')
        {
            op2 = sin(a) - sin(b);
        }
        else if (s == "cos" && c == '+')
        {
            op2 = cos(a) - cos(b);
        }
        else if (s == "cos" && c == '-')
        {
            op2 = cos(a) - cos(b);
        }
    }
};
class finalop : public scientificcalc
{
public:
    void show()
    {
        cout << "the value from simple calc is:" << op1 << endl;
        cout << "the value from scientific calc is:" << op2 << endl;
    }
};

int main()
{
    int a, b;
    char c;
    string s;
    cout << "enter two numbers:" << endl;
    cin >> a >> b;
    cout << "enter the operatin you want to perform(+ or -):" << endl;
    cin >> c;
    finalop f;
    f.process1(a, b, c);
    cout << "enter the trigno. function (sin or cos):" << endl;
    cin >> s;
    f.process2(s);
    f.show();

    return 0;
}