#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint n, k, p[200000], max = 0, cur = 0;
  cin >> n >> k;
  for (uint i = 0; i < n; i++)
  {
    cin >> p[i];
  }
  for (uint i = 0; i < k; i++)
  {
    cur += p[i];
  }
  max = cur;

  for (uint i = k; i < n; i++)
  {
    cur += p[i] - p[i - k];
    if (cur > max)
    {
      max = cur;
    }
  }
  cout << (max + k) / 2.0 << endl;
}
