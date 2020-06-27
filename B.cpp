#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  int r = 0;
  cin >> s >> t;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != t[i])
    {
      r++;
    }
  }
  cout << r << endl;
}
