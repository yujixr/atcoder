#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a[1000000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    switch (c)
    {
    case '1':
      a[i] = 1;
      break;
    case '2':
      a[i] = 2;
      break;
    default:
      a[i] = 3;
      break;
    }
  }

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      a[j] = abs(a[j] - a[j + 1]);
    }
  }
  cout << a[0] << endl;
}
