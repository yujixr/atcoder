#include <bits/stdc++.h>
using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;

uintmax_t fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit()
{
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++)
  {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// 二項係数計算
uintmax_t COM(int n, int k)
{
  if (n < k)
    return 0;
  if (n < 0 || k < 0)
    return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
  int s;
  cin >> s;
  COMinit();

  uintmax_t r = 0;

  for (int i = 1; i < s / 3 + 1; i++)
  {
    int t = s - 3 * i;
    if (t < 0)
      continue;
    else if (t == 0)
    {
      r++;
      continue;
    }

    r = (r + COM(t + i - 1, i - 1)) % MOD;
  }

  cout << r << endl;
}
