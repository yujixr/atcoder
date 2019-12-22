#include <bits/stdc++.h>
using namespace std;

int main()
{
  bool Is1 = false;
  int n, a[200000], b[200000] = {0}, lf = 0, r = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == lf + 1)
    {
      if (a[i] == 1)
      {
        Is1 = true;
        r += i;
      }
      else
      {
        r += i - b[lf - 1] - 1;
      }
      b[lf++] = i;
      // cout << a[i] << ":" << i << endl;
    }
  }
  if (!Is1)
  {
    cout << -1 << endl;
    return 0;
  }
  cout << r + n - b[lf-1] - 1 << endl;
}
