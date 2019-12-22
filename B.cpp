#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  char s[128], t[128], r[256] = "";
  cin >> n >> s >> t;
  for (int i = 0; i < n; i++)
  {
    r[i * 2] = s[i];
    r[i * 2 + 1] = t[i];
  }
  cout << r << endl;
}
