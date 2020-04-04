#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, sum = 0;
  vector<int> a;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    a.push_back(t);
    sum += t;
  }
  sort(a.begin(), a.end(), greater<>());
  for (int i = 0; i < m; i++)
  {
    if (a[i] * 4 * m < sum)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
