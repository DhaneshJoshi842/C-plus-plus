#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char x = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << x << " ";
x++;
        }
       

        cout << endl;
    }

    return 0;
}


 