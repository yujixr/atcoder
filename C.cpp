#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, c, r;
  uint64_t k, s = 0;
  vector<uint64_t> a;
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++)
  {
    uint64_t t;
    cin >> t;
    s += t;
    if (s <= k)
    {
      a.push_back(s);
    }
  }

  s = 0;
  c = a.size();
  r = a.size();
  for (int i = 1; i <= m; i++)
  {
    uint64_t t;
    cin >> t;
    s += t;
    if (s <= k)
    {
      r = max(r, i);
      for (; c >= 1; c--)
      {
        if (a[c - 1] + s <= k)
        {
          r = max(r, c + i);
          break;
        }
      }
    }
  }
  cout << r << endl;
}
