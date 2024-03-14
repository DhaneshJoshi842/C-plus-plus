// file handeling-opening file using constructor(here the contructor named by op and in)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char s1[100]; // beacause we cant include space character into the string during input
    string s2;
    cout << "enter your name:";
    gets(s1);
    ofstream op("p58.txt");
    op << s1; // send the data to txt from string file(cout(InThefile))
    op.close();
    ifstream in("p58.txt");
    getline(in, s2); // taking data from the file into the new string (cin(inthefile)) and using this to also include the space character
    cout << "my name is:" << s2;
    in.close();
    return 0;
}