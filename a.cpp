#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a >= b)
  {
    for (int i = 1; i <= a; i++)
    {
      if (i <= a - b)
      {
        cout << i << endl
             << -(i * 2 + b) << endl;
      }
      else
      {
        cout << i << endl
             << -i << endl;
      }
    }
  }
  else if (a < b)
  {
    for (int i = 1; i <= a; i++)
    {
      if (i <= b - a)
      {
        cout << i * 2 + a << endl
             << -i << endl;
      }
      else
      {
        cout << i << endl
             << -i << endl;
      }
    }
  }
}
