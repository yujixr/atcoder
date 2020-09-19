#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
array<array<int, 200000>, 20> lr = {0};

int main()
{
  int n, k;
  vector<int> s;
  cin >> n >> k;
  for (int i = 0; i < k; i++)
  {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; j++)
    {
      s.push_back(j);
    }
  }
  sort(s.begin(), s.end());

  lr[0][0] = 1;
  for (int i = 0; i < s.size(); i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      (lr[i + 1][j] += lr[i][j]) %= MOD;
      if (j >= s[i])
      {
        (lr[i + 1][j] += lr[i][j - s[i]]) %= MOD;
      }
    }
  }

  cout << lr[s.size() - 1][n - 1] << endl;
}
