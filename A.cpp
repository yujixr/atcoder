#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t, u;
  int a, b;
  cin >> s >> t;
  cin >> a >> b;
  cin >> u;
  if (s == u)
  {
    cout << a - 1 << ' ' << b << endl;
  }
  else if (t == u)
  {
    cout << a << ' ' << b - 1 << endl;
  }
  else
  {
    cout << a << ' ' << b << endl;
  }
}
