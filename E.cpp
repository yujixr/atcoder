#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t n, x = 0;
  vector<uint64_t> a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    uint64_t t;
    cin >> t;
    a.push_back(t);
    x ^= t;
  }
  for (auto i : a)
  {
    cout << (x ^ i) << ' ';
  }
}
