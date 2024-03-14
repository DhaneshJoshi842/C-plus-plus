// accessing value of arry using pointer
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    int *p = arr;
    cout << "elements of the array are:";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << *(p++);
    }
    return 0;
}