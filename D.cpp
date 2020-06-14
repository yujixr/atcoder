#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, r = 0, m = 0;
  vector<int> a;
  array<int, 1000000> u = {0};
  array<bool, 1000000> f = {false}, c = {false};
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    a.push_back(t);
    u[t - 1]++;
    if (t > m)
      m = t;
  }
  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++)
    if (f[a[i] - 1] == false && c[a[i] - 1] == false)
    {
      c[a[i] - 1] = true;
      if (u[a[i] - 1] == 1)
        r++;
      for (int j = a[i] * 2; j <= m; j += a[i])
        f[j - 1] = true;
    }

  cout << r << endl;
}
