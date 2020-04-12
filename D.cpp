#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t sum, n, r = 0, g = 0, b = 0;
  string s;
  cin >> n >> s;
  for (auto c : s)
  {
    switch (c)
    {
    case 'R':
      r++;
      break;
    case 'G':
      g++;
      break;
    case 'B':
      b++;
      break;

    default:
      abort();
    }
  }
  sum = r * g * b;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1, k = i + 2; j < n && k < n; j++, k += 2)
    {
      if (s[i] != s[j] && s[i] != s[k] && s[j] != s[k] && j - i == k - j)
      {
        sum--;
      }
    }
  }

  cout << sum << endl;
}
