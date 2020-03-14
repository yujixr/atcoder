#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  char str[100] = "";

  for (int i = 0; i < n; i++)
  {
    str[i] = 'a';
  }

  cout << str << endl;
  while (1)
  {
    for (int i = n - 1; i > 0; i--)
    {
      for (int j = i - 1; j > -1; j--)
      {
        if (str[i] <= str[j])
        {
          str[i]++;
          for (int k = i + 1; k < n; k++)
          {
            str[k] = 'a';
          }
          goto ok;
        }
      }
    }
    return 0;
  ok:
    cout << str << endl;
  }
}
