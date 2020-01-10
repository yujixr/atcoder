#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, a[100000], max = 0, r = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  if (max % 2 != 0)
  {
    max *= 2;
  }
  for (int x = max / 2; x <= m; x += max)
  {
    for (int i = 0; i < n; i++)
    {
      if (x % a[i] != a[i] / 2)
      {
        goto flag;
      }
    }
    r++;
  flag:
    1;
  }
  cout << r << endl;
}
