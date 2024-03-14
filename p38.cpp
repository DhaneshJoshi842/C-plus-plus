// dynamic initialization of object using contructor
// dynamic initialization-initialize values
#include <iostream>
using namespace std;
class bank
{
    int a;

public:
    bank()
    {
        // this is a by default constructor we have to made while we declare objects
        // because while declaration of objects compliler once call an constructor....
    }
    bank(int p, int y, int R)
    {

        cout << "the total return is :" << (y * (p * (float(R) / 100))) + p << endl;
    }
    bank(int p, int y, float r)
    {
        cout << "the total return is :" << (y * (p * r)) + p << endl;
    }
};
int main()
{
    int p, y, R;
    float r;

    cin >> p >> y >> R;
    bank(p, y, R); // IMP -we cant write it as b1.bank(p,y,R) is is the method to initialize the contructor with object and here the b1 object has access for a const. which pass int value of R
    cin >> p >> y >> r;
    bank(p, y, r); // here the b2 object has access for a const. which pass float value of r
    return 0;
}