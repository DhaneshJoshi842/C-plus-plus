#include <iostream>
using namespace std;
void add();
class y;
class x
{
  int data;

public:
  void setdata(int a)
  {
    data = a;
  }
  friend void add(x o1, y o2);
};
class y
{
  int num;

public:
  void setdata(int b)
  {
    num = b;
  }
  friend void add(x o1, y o2);
};
void add(x o1, y o2)
{
  cout << o1.data + o2.num;
}

int main()
{

  x c1;
  c1.setdata(1);
  y c2;
  int sum;
  c2.setdata(4);
  add(c1, c2);
}