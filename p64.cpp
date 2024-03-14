// accessing an templetised fn ooutside the class
#include <iostream>
using namespace std;
template <class t>
class eg

{
public:
    t a;
    eg(t x)
    {
        a = x;
    }
    void display();
};
template <class t>
void eg<t>::display()
{
    cout << a;
}

int main()
{

    eg<int> eg(5);
    eg.display();

    return 0;
}