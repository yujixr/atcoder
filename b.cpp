#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  string s;
  cin >> t >> s;

  int r = 0;
  for (int i = 0; i < s.length(); i++)
  {
    char p = (i % 2) ? 'O' : 'I';
    if (s[i] != p)
      r++;
  }
  cout << r << endl;
}
