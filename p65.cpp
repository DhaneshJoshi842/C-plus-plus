// vectors-
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) // tiking referance in v and here vector<int> is like a data type
{
    for (int i = 0; i < v.size(); i++) // v.size() is a fn which returns size of a vector
    {

        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int size = 4, x;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter a number:";
        cin >> x;
        vec1.push_back(x);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    // iterator-
    vector<int>::iterator itr = vec1.begin(); // this star that itr named iterator now pointed to the begining element of the vector
    // inserting new element using insert()
    vec1.insert(itr, 69);
    display(vec1);
    vec1.insert(itr + 3, 69); // inserting 69 at the 3rd index
    display(vec1);
    // to set multiple elements-
    vector<int> vec2(3, 6); // 3 elements of 6's
    display(vec2);
    return 0;
}
