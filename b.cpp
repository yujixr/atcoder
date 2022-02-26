#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n, m;
  unordered_map<uint, uint> a;

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    uint tmp_a;
    cin >> tmp_a;
    a[tmp_a]++;
  }
  for (int i = 0; i < m; i++)
  {
    uint b;
    cin >> b;

    if (a[b] == 0)
    {
      cout << "No" << endl;
      return 0;
    }
    a[b]--;
  }
  cout << "Yes" << endl;
}
