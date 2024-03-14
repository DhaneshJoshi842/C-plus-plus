// arrays-printing even no's from input
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter a no." << endl;
        cin >> arr[i];
    }
    cout << "the even no. are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
        else
        {
            continue;
        }
    }

    return 0;
}