#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;

  n %= 26;
  for (auto &c : s)
  {
    c += n;
    if (c > 90)
    {
      c -= 26;
    }
  }

  cout << s << endl;
}
