#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, int> m;
  vector<int> a;
  int n, rp = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int ta;
    cin >> ta;
    a.push_back(ta);
    m[ta]++;
  }

  for (auto &ma : m)
  {
    rp += ma.second * (ma.second - 1) / 2;
  }

  for (int k = 0; k < n; k++)
  {
    cout << std::setprecision(2000) << rp + 1 - (*m.find(a[k])).second << endl;
  }
}
