#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, t = 0;
        cin >> n;
        if (n > 50)
        {
            for (int i = 0; n != 50; i++)
            {
                n = n - 3;
                t++;
                if (n < 50)
                {
                    n = n + 2;
                    t++;
                }
                cout << t << endl;
            }
        }
        else if (n < 50)
        {
            for (int i = 0; n != 50; i++)
            {

                n = n + 2;
                t++;
                if (n > 50)
                {
                    t++;
                    n = n - 3;
                }
            }
            cout << t << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
