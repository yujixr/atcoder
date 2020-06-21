#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  map<int, int> a;
  intmax_t s = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    a[t]++;
    s += t;
  }
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int b, c;
    cin >> b >> c;
    s += a[b] * (c - b);
    a[c] += a[b];
    a[b] = 0;
    cout << s << endl;
  }
}
