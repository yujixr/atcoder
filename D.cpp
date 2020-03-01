#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, k;
  vector<pair<int, int>> ab, cd, cl;
  vector<int> c;
  array<int, 100000> r = {0};
  cin >> n >> m >> k;
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    ab.push_back(make_pair(min(a, b), max(a, b)));

    if (a == b + 1 || a + 1 == b)
    {
      c.push_back(min(a, b));
    }
  }
  for (int i = 0; i < k; i++)
  {
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    cd.push_back(make_pair(min(c, d), max(c, d)));
  }

  sort(c.begin(), c.end());
  int start = c[0], end = c[0] + 1;
  for (int i = 1; i < c.size(); i++)
  {
    if (end == c[i])
    {
      end++;
    }
    else
    {
      cl.push_back(make_pair(start, end));
      start = c[i];
      end = c[i] + 1;
    }
  }
  cl.push_back(make_pair(start, end));

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (find(ab.begin(), ab.end(), make_pair(i, j)) == ab.end() &&
          find(cd.begin(), cd.end(), make_pair(i, j)) == cd.end())
      {
        for (auto &cla : cl)
        {
          if (cla.first <= i && cla.second >= j-1)
          {
            r[i]++;
            r[j]++;
            break;
          }
        }
      }
    }
    cout << r[i] << ' ';
  }
}
