#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int q, t, f, nverse = 0;
  char c;

  cin >> s;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    cin >> t;
    if (t == 1)
      nverse++;
    else
    {
      cin >> f >> c;
      if ((f == 1 && nverse % 2 == 0) || (f == 2 && nverse % 2 == 1))
        s.insert(0, &c);
      else
        s.push_back(c);
    }
  }
  if (nverse % 2 == 1)
    reverse(s.begin(), s.end());
  cout << s << endl;
}
