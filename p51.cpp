#include <iostream>
using namespace std;
class shopitems
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "price of id no " << id << " item is: " << price << endl;
    }
};

int main()
{
    shopitems *ptr = new shopitems[3];
    shopitems *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter id and price of product:" << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        (*ptrtemp).getdata();
        ptrtemp++;
    }

    return 0;
}