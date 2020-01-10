#include <bits/stdc++.h>
using namespace std;

int kaijo(int n)
{
  int r = 1;
  for (int i = 2; i <= n; i++)
  {
    r *= i;
  }
  return r;
}

int main()
{
  int n, p[8], q[8], a = 0, b = 0;
  vector<int> al = {},bl = {};
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
    int t = p[i];
    for (auto r : al)
    {
      if (p[i] > r)
      {
        t--;
      }
    }
    a += kaijo(n - i - 1) * t;
    al.push_back(p[i]);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> q[i];
    int t = q[i];
    for (auto r : bl)
    {
      if (q[i] > r)
      {
        t--;
      }
    }
    b += kaijo(n - i - 1) * t;
    bl.push_back(q[i]);
  }
  cout <<abs(a-b)<<endl;
}
