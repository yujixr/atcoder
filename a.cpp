#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int takahashi = b * (a * (x / (a + c)) + min(x % (a + c), a));
  int aoki = e * (d * (x / (d + f)) + min(x % (d + f), d));

  if (takahashi > aoki)
  {
    cout << "Takahashi" << endl;
  }
  else if (takahashi < aoki)
  {
    cout << "Aoki" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }
}
