#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        // we have to create an default virtual fn so it can point the pointer to the
        // fn whose adress they got
    }
};
class cwhvidio : public CWH
{
protected:
    int vidiolength;

public:
    cwhvidio(string s, float r, int vl) : CWH(s, r)
    {
        vidiolength = vl;
    }
    void display()
    {
        cout << "the title of the vidio is:" << title << endl;
        cout << "the avg. length of the vidios is:" << vidiolength << endl;
        cout << "the rating of the vidio is :" << rating << endl;
    }
};
class cwhtext : public CWH
{
protected:
    int words = 400;

public:
    cwhtext(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "the title of the vidio is:" << title << endl;
        cout << "total number of words are:" << words << endl;
        cout << "the rating of the textual data is:" << rating << endl;
    }
};

int main()
{
    cwhvidio cv("vidio data", 4.5, 20);
    // cv.display();
    cwhtext cw("textual data", 4.6, 400);
    // cw.display();
    // now we create an object ptr to access virtual function
    CWH *x[2];
    x[0] = &cv;
    x[1] = &cw;
    x[0]->display();
    x[1]->display();

    return 0;
}