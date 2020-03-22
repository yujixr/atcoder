#include <bits/stdc++.h>
using namespace std;

bool isOK(string s)
{
  auto n = s.length();

  for (int i = 0; i < n / 2; i++)
  {
    if (s[i] != s[n - i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s;
  cin >> s;
  auto n = s.length();

  if (!isOK(s))
  {
    cout << "No" << endl;
    return 0;
  }

  if (!isOK(s.substr(0, (n - 1) / 2)))
  {
    cout << "No" << endl;
    return 0;
  }

  if (!isOK(s.substr((n + 3) / 2 - 1, n)))
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}
