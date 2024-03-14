// file handling-(run both the classes one by one )
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s1 = "hello dhanesh jai shree krishna";
    ofstream op("p57.txt");
    op << s1;
    string s2;
    ifstream in("p57.txt");
    // // in >> s2;(we can use the following syntax for the input when there is no presence of special character otherwise use the getline fn)
    getline(in, s2); // this is the fn used for taking input from another file syntax-gatline (object,variable);
    cout << s2 << endl;
    // we can use the getline fn when we hae to consider the input present in mulptiple lines
    // getline(in, s2);
    // cout << s2 << endl;

    return 0;
}