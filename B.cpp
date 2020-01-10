#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;

  char b = '_';
  int cnt = 0;
  for (auto c : s)
  {
    if (b == 'B')
    {
      if (c == 'C')
      {
        cnt++;
      }
      b = '_';
    }
    if (b == 'A')
    {
      if (c == 'B')
      {
        b = 'B';
      }
      else
      {
        b = '_';
      }
    }
    if (b == '_' && c == 'A')
    {
      b = 'A';
    }
  }
  cout << cnt << endl;
}
