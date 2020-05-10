#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, x, c[12], a[12][12], min = -1;
  cin >> n >> m >> x;
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int bit = 0; bit < (1 << n); ++bit)
  {
    int cost = 0;
    int skill[12] = {0};

    for (int i = 0; i < n; ++i)
    {
      if (bit & (1 << i))
      {
        cost += c[i];
        for (int j = 0; j < m; j++)
        {
          skill[j] += a[i][j];
        }
      }
    }
    for (int j = 0; j < m; j++)
    {
      if (skill[j] < x)
      {
        goto out;
      }
    }
    if (min == -1 || min > cost)
    {
      min = cost;
    }
  out:
    min;
  }
  cout << min << endl;
}
