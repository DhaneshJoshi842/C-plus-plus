// ambiguity/duplicasy resolution-
#include <iostream>
using namespace std;
class base1
{
public:
    void say()
    {
        cout << "hello" << endl;
    }
};
class base2
{
public:
    void say()
    {
        cout << "jsk" << endl;
    }
};
class derived : public base1, public base2
{
public:
    void say()
    {

        base1::say(); // coment one one each time and see the resolution of the ambiguity
        base2::say();
    }
};
int main()
{
    derived d;
    d.say();
    return 0;
}