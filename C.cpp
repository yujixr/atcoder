#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, s[5], c[5], val[3] = {-1, -1, -1};
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> s[i] >> c[i];
    if (val[s[i] - 1] != -1 && val[s[i] - 1] != c[i])
    {
      val[s[i] - 1] = -2;
    }
    else
    {
      val[s[i] - 1] = c[i];
    }
  }
  if (val[0] == -2 || val[1] == -2 || val[2] == -2)
  {
    cout << -1 << endl;
    return 0;
  }
  switch (n)
  {
  case 1:
    cout << (val[0] == -1 ? 0 : val[0]) << endl;
    break;
  case 2:
    if (val[0] == 0)
    {
      cout << -1 << endl;
      return 0;
    }
    cout << (val[0] == -1 ? 1 : val[0]) << (val[1] == -1 ? 0 : val[1]) << endl;
    break;
  case 3:
    if (val[0] == 0)
    {
      cout << -1 << endl;
      return 0;
    }
    cout << (val[0] == -1 ? 1 : val[0]) << (val[1] == -1 ? 0 : val[1]) << (val[2] == -1 ? 0 : val[2]) << endl;
    break;
  }
}
