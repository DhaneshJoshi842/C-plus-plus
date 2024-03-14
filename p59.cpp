// file handling-learing about eof
// learining to print multiple lines of file into the terminal
// opening file using member fn
// ******->try an intersesting thing replace  in.open("p59.txt") with  in.open("p59.cpp")
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    ifstream in;
    in.open("p59.txt"); // open() is the member fn used to open the file
    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s << endl;
    }
    in.close(); // close() is the member fn used to close the file

    return 0;
}