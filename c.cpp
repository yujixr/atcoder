#include <bits/stdc++.h>
using namespace std;

intmax_t divider = 1000000007;

intmax_t pow(int x, int y)
{
  intmax_t r = 1;
  for (int i = 0; i < y; i++)
  {
    r *= x;
    r %= divider;
  }
  return r;
}

int main()
{
  int n;
  cin >> n;

  intmax_t r = pow(10, n) - pow(9, n) * 2 + pow(8, n);
  r %= divider;
  r = r < 0 ? r + divider : r;

  cout << r << endl;
}
