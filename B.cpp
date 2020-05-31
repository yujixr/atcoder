#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<uint64_t> a;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    uint64_t _a;
    cin >> _a;
    a.push_back(_a);
    if (_a == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }
  
  uint64_t r = 1;
  for (auto _a : a)
  {
    r *= _a;
    if (r > 1000000000000000000)
    {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << r << endl;
}
