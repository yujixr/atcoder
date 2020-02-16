#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<int> a;
  int64_t k, n_minus = 0, n_zero = 0, n_plus = 0;
  vector<int64_t> r;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (tmp < 0)
    {
      n_minus++;
    }
    else if (tmp == 0)
    {
      n_zero++;
    }
    else
    {
      n_plus++;
    }
    a.push_back(tmp);
  }
  sort(a.begin(), a.end());

  if (k <= n_minus * n_plus)
  {
    cout << "minus" << endl;
  }
  else if (k <= n * (n - 1) / 2 - ((n_minus * (n_minus - 1) + n_plus * (n_plus - 1)) / 2))
  {
    cout << 0 << endl;
    return 0;
  }
  else
  {
    cout << "plus" << endl;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      r.push_back((int64_t)a[i] * a[j]);
      // cout << (int64_t)a[i] * a[j] << endl;
    }
  }
  sort(r.begin(), r.end());
  // for (auto item : r)
  // {
  //   cout << item << endl;
  // }
  cout << r[k - 1] << endl;
}
