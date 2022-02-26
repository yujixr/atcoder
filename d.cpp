#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int q;
  multiset<uint64_t> a;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int type, x, k;
    cin >> type >> x;
    if (type != 1)
      cin >> k;

    multiset<uint64_t>::iterator iter;
    switch (type)
    {
    case 1:
      a.insert(x);
      break;

    case 2:
      iter = a.upper_bound(x);
      for (int j = 0; j < k; j++)
      {
        if (iter == a.begin())
          goto dbreak;
        *iter--;
      }
      cout << *iter << endl;
      break;

    case 3:
      iter = a.lower_bound(x);
      if (iter == a.end())
        goto dbreak;
      for (int j = 0; j < k - 1; j++)
      {
        *iter++;
        if (iter == a.end())
          goto dbreak;
      }
      cout << *iter << endl;
      break;

    dbreak:
    default:
      cout << -1 << endl;
      break;
    }
  }
}
