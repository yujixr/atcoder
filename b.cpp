#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  string s;
  map<char, bool> count;
  bool is_small_appeared = false;
  bool is_large_appeared = false;

  cin >> s;
  for (auto c : s)
  {
    if (count[c])
    {
      cout << "No" << endl;
      return 0;
    }

    if ('a' <= c && c <= 'z')
    {
      is_small_appeared = true;
    }
    else
    {
      is_large_appeared = true;
    }

    count[c] = true;
  }

  if (!is_small_appeared || !is_large_appeared)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}
