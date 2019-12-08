#include <bits/stdc++.h>
using namespace std;

int main()
{
  bool IsChecked[100000] = {false};
  int64_t n, a[100000], t[100000], e, ba;
  cin >> n;
  vector<pair<int64_t, int64_t>> pairs(n);
  for (int64_t i = 0; i < n; i++)
  {
    cin >> a[i] >> t[i];
    pairs[i] = make_pair(a[i], t[i]);
  }
  sort(pairs.begin(), pairs.end());

  if (!IsChecked[n - 1])
  {
    if (pairs[n - 1].second > pairs[n - 1].first)
    {
      for (int64_t i = 0; i < n; i++)
      {
        IsChecked[i] = (pairs[i].first * pairs[n - 1].first >= pairs[i].second * pairs[n - 1].second);
      }
      e = pairs[n - 1].second;
    }
    else
    {
      for (int64_t i = 0; i < n; i++)
      {
        IsChecked[i] = (pairs[i].first >= pairs[i].second);
      }
      e = pairs[n - 1].first;
    }
    ba = pairs[n - 1].first;
  }

  for (int64_t j = n - 2; j >= 0; j--)
  {
    if (!IsChecked[j])
    {
      e += ba - pairs[j].first;
      ba = pairs[j].first;
      if (e < pairs[j].second)
      {
        e = pairs[j].second;
      }
    }
  }
  cout << e + ba << endl;
}