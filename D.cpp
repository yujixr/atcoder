#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  cout << n << endl;
  for (int k = 2; k < n; k++)
  {
    int a = n - k;
    if (y - x <= k)
    {
      a -= x - (y - k) + 1;
    }

    int ov = (x + k + (y - x - 1)) - n;
    if (ov < 0)
    {
      ov = 0;
    }

    int mi = (y - (k + (y - x - 1)));
    if (mi < 1)
    {
      mi = 1;
    }
    a += (x - ov) - mi + 1;
    if (a < 0)
    {
      a = 0;
    }
    cout << a << endl;
  }
}
