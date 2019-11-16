#include <bits/stdc++.h>
using namespace std;

typedef int ull;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
  ull x, y;
  ull nx = 0, ny = 0;
  cin >> x >> y;

  if (x < 3 || y < 3)
  {
    cout << 0 << endl;
    return 0;
  }

  ull diff = x - y; //横が多いぶん
  if (!diff)
  {
    ny = nx = x / 3;
  }
  else if (diff > 0)
  {
    ny = (y - diff) / 3;
    nx = ny + diff;
  }
  else
  {
    nx = (x + diff) / 3;
    ny = nx - diff;
  }
  // cout << (fact(nx + ny) / (fact(nx) * fact(ny))) % 1000000007 << endl;
    COMinit();
    cout << COM(nx+ny,nx) << endl;
  // printf("%llu\n", factdiv(fact1(nx + 1, nx + ny), ny) % 1000000007);
}
