// maps-
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksmap; // here marks map is map and string and int are two datatypes which we can store at single index
    marksmap["dhanesh"] = 94;
    marksmap["tanishk"] = 100;
    marksmap["yana"] = 95;
    marksmap["ranjeet"] = 99;
    map<string, int>::iterator itr;
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << "-" << (*itr).second << endl; // here first accessing the first value in index and second accessing second value in that same index locatinn
    }
    cout << " after inserting data of two moren students:" << endl;
    marksmap.insert({{"divyashakti", 89}, {"lakshya", 90}});
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << "-" << (*itr).second << endl;
    }
    cout << endl;
    

    return 0;
}