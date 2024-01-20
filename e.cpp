#include <iostream>
#include <math.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n;
  cin >> n;

  int m = sqrt(n);
  cout << m * 2 << endl;

  int l = m * m - n;
  vector<vector<int>> a(m * 2);
  for (int i = 0; i < m; i++)
  {
    int k = ((l--) > 0) ? m - 1 : m;
    cout << k << ' ';

    for (int j = 0; j < k; j++)
    {
      int tmp = m * i + j + 1;
      a[i].push_back(tmp);
      cout << tmp << ' ';
    }

    cout << endl;
  }

  for (int i = 0; i < m; i++)
  {
    int k = ((l--) > 0) ? m - 1 : m;
    cout << k << ' ';

    for (int j = 0; j < k; j++)
    {
      int tmp = i + m * j + 1;
      a[m + i].push_back(tmp);
      cout << tmp << ' ';
    }

    cout << endl;
  }

  string s;
  cin >> s;

  int hit_1 = -1, hit_2 = -1;
  for (int i = 0; i < m; i++)
    if (s[i] == 1)
      if (hit_1 != -1)
        hit_1 = i;
      else
        hit_2 = i;

  if (hit_1 == -1 && hit_2 == -1)
  {
    cout << m * m << endl;
    return 0;
  }

  if (hit_2 == -1)
  {
    cout << a[hit_1].back() << endl;
    return 0;
  }

  for (auto x : a[hit_1])
  {
    for (auto y : a[hit_2])
    {
      if (x == y)
      {
        cout << x << endl;
        return 0;
      }
    }
  }
}
