#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int m;
  cin >> m;

  for (int i = 0; i < m; i++)
  {
    string s;
    cin >> s;
    replace(s.begin(), s.end(), 'A', 'Z');
    replace(s.begin(), s.end(), 'T', 'A');
    replace(s.begin(), s.end(), 'Z', 'T');
    replace(s.begin(), s.end(), 'C', 'Z');
    replace(s.begin(), s.end(), 'G', 'C');
    replace(s.begin(), s.end(), 'Z', 'G');
    reverse(s.begin(), s.end());
    cout << s << endl;
  }
}
