#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, n, max = 0;
  vector<int> a;
  cin >> k >> n;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    a.push_back(t);
    if (t - a[i - 1] > max)
    {
      max = t - a[i - 1];
    }
  }

  if (k + a[0] - a[n - 1] > max)
  {
    max = k + a[0] - a[n - 1];
  }

  cout << k - max << endl;
}
