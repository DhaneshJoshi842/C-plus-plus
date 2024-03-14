#include <iostream>
using namespace std;
class shop
{
public:
    int id[5];
    int price[5];

public:
    void print();
};

int main()
{
    shop x;
    x.print();
}
void shop::print()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "the id of product " << i + 1 << " is:" << endl;
        cin >> id[i];
        cout << "the price of product " << i + 1 << " is:" << endl;
        cin >> price[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "the id of product is " << id[i] << " and its price is " << price[i] << endl;
    }
}
