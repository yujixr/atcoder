#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  unordered_set<int> a;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    uint64_t tmp;
    cin >> tmp;
    if (a.count(tmp))
    {
      cout << "NO" << endl;
      return 0;
    }
    a.insert(tmp);
  }
  cout << "YES" << endl;
}
