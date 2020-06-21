#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t n;
  cin >> n;
  vector<char> s;
  while (n != 0)
  {
    if (n % 26 == 0)
    {
      s.push_back('z');
      n/=26;
      n--;
    }
    else
    {
      s.push_back('`' + n % 26);
      n /= 26;
    }
  }

  reverse(s.begin(), s.end());
  for (auto c : s)
  {
    cout << c;
  }
  cout << endl;
}
