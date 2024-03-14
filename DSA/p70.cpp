// tut5.cpp-
//**p1**- product minus sum of a number
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int s = 0, p = 1;
//     while (n)
//     {
//         s = (s + (n % 10));
//         p = (p * (n % 10));
//         n = n / 10;
//     }
//     cout << p << endl;
//     cout << s << endl;
//     cout << p - s << endl;
//     return 0;
// }
//**p2**-no of  1 bits in a number
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, c = 0;
//     cin >> n;
//     while (n)
//     {
//         if (n & 1)
//         {
//             c++;
//         }
//         n = n > 1;//right shift
//     }
//     cout << c << endl;
//     return 0;
// }
//**p3**-reverse integer
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n, ans = 0, r;
//     cin >> n;
//     while (n)
//     {

//         r = n % 10;
//         if (ans > INT16_MAX / 10 || ans < INT16_MIN / 10)
//         {
//             return 0; // this return zero will directly breaks the int main function
//         }
//         ans = (ans * 10) + r;
//         n = n / 10;
//     }
//     cout << ans;
// }
//**p4**-compliment of base 10
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, mask = 0, ans, x;
//     cin >> n;
//     x = n;
//     while (n)
//     {
//         mask = ((mask << 1) | 1);
//         n = n >> 1;
//         // mask = ((mask << 1) | 1);
//     }

//     ans = (~x) & (mask);
//     cout << ans;
//     return 0;
// }
//**p5**-
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i <= 31; i++) // because int lis in {0to2^31}
//     {
//         if (n == pow(2, i))
//         {
//             cout << "yes";
//             return 0;
//         }
//     }
//     cout << "no";
// }
// tut6.cpp-
//**p3**-binary to decimal
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n, s = 0;
//     cin >> n;
//     for (int i = 0; n != 0; i++)
//     {
//         if (n % 10 != 0)
//         {
//             s = s + pow(2, i);
//         }
//         n = n / 10;
//     }
//     cout << s << endl;
//     return 0;
// }
//**p4**-negative decimal no. into binary(do it)
//**p5**- decimal no. into binary
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ar[32];
//     int s = 0;

//     for (int i = 0; n != 0; i++)
//     {
//         s++;
//         ar[i] = n % 2;
//         n = n / 2;
//     }
//     for (int i = s - 1; i >= 0; i--)
//     {
//         cout << ar[i];
//     }
//     return 0;
// }