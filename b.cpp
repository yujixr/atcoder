#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

bool is_kaibun(string s)
{
  auto size = s.size();
  for (int i = 0; i < size / 2; i++)
  {
    if (s[i] != s[size - i - 1])
      return false;
  }
  return true;
}

int main()
{
  string n;
  cin >> n;
  for (int i = 0; i < 20; i++)
  {
    if (is_kaibun(n))
    {
      cout << "Yes" << endl;
      return 0;
    }
    n = "0" + n;
  }
  cout << "No" << endl;
}
