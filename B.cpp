#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[3][3], n, b[10];
  bool m[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
    }
  }
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      m[i][j] = false;
      for (int k = 0; k < n; k++)
      {
        if (a[i][j] == b[k])
        {
          m[i][j] = true;
          break;
        }
      }
    }
  }
  if (m[0][0] == true && m[0][1] == true && m[0][2] == true ||
      m[1][0] == true && m[1][1] == true && m[1][2] == true ||
      m[2][0] == true && m[2][1] == true && m[2][2] == true ||
      m[0][0] == true && m[1][0] == true && m[2][0] == true ||
      m[0][1] == true && m[1][1] == true && m[2][1] == true ||
      m[0][2] == true && m[1][2] == true && m[2][2] == true ||
      m[0][0] == true && m[1][1] == true && m[2][2] == true ||
      m[0][2] == true && m[1][1] == true && m[2][0] == true)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
