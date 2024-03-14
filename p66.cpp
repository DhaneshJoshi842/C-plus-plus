// lists-
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++) // lst.end() returns end of list
    {
        cout << *it << " ";
    }
    cout << ",current size is: " << lst.size();
    cout << endl;
}

int main()
{
    int size, x;
    list<int> list1; // list 1 is of zero length
    cout << "enter the size:";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the number:";
        cin >> x;
        list1.push_back(x);
    }
    display(list1);
    // sorting-
    list1.sort();
    cout << "after sorting:";
    display(list1);
    // pop operation---->pop_back()-pop from back side(lifo),pop_front()-pop from front side(fifo) and remove(element)- removes the element which you wants to remove
    cout << "after pop_back:";
    list1.pop_back();
    display(list1);
    cout << "after pop_back:";
    list1.pop_front();
    display(list1);
    cout << "enter the element you want to remove :";
    cin >> x;
    cout << "after removing " << x << ":";
    list1.remove(x);
    display(list1);
    return 0;
}