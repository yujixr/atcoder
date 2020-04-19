#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t n, m, a = 0;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int tmp;
    cin >> tmp;
    a += tmp;
  }
  if (n < a)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << n - a << endl;
  }
}
