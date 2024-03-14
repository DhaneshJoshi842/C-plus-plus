// tut4.cpp-
//  PETTERNS-
//  #include <iostream>
//  using namespace std;
//**p1**-
//  int main()
//  {
//      int n;
//      cin >> n;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < n; j++)
//          {
//              cout << "* ";
//          }
//          cout << endl;
//      }
//      return 0;
//  }
//**p2**-
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//**p3**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//**p4**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//**p5**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int x = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }
//         cout << endl;
//     }

//     return 0;
// }
//**p6**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//**p7**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//**p8**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int x = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << x << " ";
//             x++;
//         }
//         cout << endl;
//     }

//     return 0;
// }
//**p9**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = i; j < i * 2; j++)
//         {

//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//**p10**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//**p11**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char x = 65;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//         }
//         x++;
//         cout << endl;
//     }

//     return 0;
// }
//**p12**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         char x = 65;
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
// x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//**p13**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char x = 65;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//**p14**-

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char x = 65 + i;
//         for (int j = 0; j < n; j++)
//         {
//             cout << x << " ";
//             x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//**p15**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char x = 65;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout << x << " ";
//         }
//         x++;

//         cout << endl;
//     }

//     return 0;
// }

//**p16**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char x = 65;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout << x << " ";
// x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

//**p17**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char x = 65;
//     for (int i = 0; i < n; i++)
//     {
//         char x = 65 + i;
//         for (int j = i; j >= 0; j--)
//         {
//             cout << x << " ";
//             x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//**p18**-
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         char x = 68 - i;
//         for (int j = i; j >= 0; j--)
//         {
//             cout << x << " ";
//             x++;
//         }

//         cout << endl;
//     }

//     return 0;
// }
//**p19**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//**20**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {

//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }

//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//**22**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//**p23**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int x = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << x;
//         }
//         x++;
//         cout << endl;
//     }
//     return 0;
// }

//**p24**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int x = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--)
//         {
//             cout << x;
//             x++;
//         }
//         // x++;
//         cout << endl;
//     }
//     return 0;
// }
//**p25**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {

//         int x = 1;
//         for (int s = 1; s <= n - i; s++)
//         {
//             cout << " ";
//         }
//         while (x != 0)
//         {
//             if (x < i)
//             {
//                 cout << x;
//                 x++;
//             }
//             else if (x == i)
//             {
//                 while (x >= 1)
//                 {
//                     cout << x;
//                     x--;
//                 }
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }

//**p26**-
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int o = n + 1;
//     for (int i = 1; i <= n; i++)
//     {
//         int x = 0;
//         for (int j = 1; j <= n * 2; j++)
//         {
//             x++;
//             if (x >= o)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << x;
//             }
//             if (x == n)
//             {
//                 for (int l = 1; l <= n; l++)
//                 {
//                     j++;
//                     if (x >= o)
//                     {
//                         cout << "*";
//                     }
//                     else
//                     {
//                         cout << x;
//                     }

//                     x--;
//                 }
//             }
//         }
//         o--;
//         cout << endl;
//     }

//     return 0;
// }
