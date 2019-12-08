#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  char s[500][500], t[500][500];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> s[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> t[i][j];
    }
  }
  int r[4] = {0,1,2,1};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      r[0] += (s[i][j] != t[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      r[1] += (s[j][n - i - 1] != t[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      r[2] += (s[n - i - 1][n - j - 1] != t[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      r[3] += (s[n - j - 1][i] != t[i][j]);
    }
  }
  int rr = r[0];
  if (rr > r[1])
  {
    rr = r[1];
  }
  if (rr > r[2])
  {
    rr = r[2];
  }
  if (rr > r[3])
  {
    rr = r[3];
  }
  cout << rr << endl;
}
