#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, ac[100000] = {0}, wa[100000] = {0}, r1 = 0, r2 = 0;

  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    string tmp;
    int p;
    cin >> p;
    cin >> tmp;
    if (tmp == "AC")
    {
      ac[p - 1]++;
    }
    else if (ac[p - 1] == 0)
    {
      wa[p - 1]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (ac[i] >= 1)
    {
      r1++;
      r2 += wa[i];
    }
  }
  cout << r1 << " " << r2 << endl;
}
