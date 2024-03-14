// functors(function objects)-{greater<int>()}
#include <iostream>
#include <algorithm> //sort() fn is present in this
using namespace std;

int main()
{
    int arr[5] = {3, 1, 6, 2, 8};
    cout << "in acssendig: ";
    sort(arr, arr + 5); // sort from arr[0 ]-->arr[4] or from 1st index to 5th indexthis syntax by defaultly arranged in acssending
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // for decssending-use greater<int>() which is functor
    cout << "in descending: ";
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
