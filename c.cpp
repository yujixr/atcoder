#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, r = 0;
  vector<int> a;

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    a.push_back(t);
  }

  for (int i = 0; i < m; i++)
  {
    int b;
    cin >> b;
    for (int j = 0; j < n; j++)
    {
      r += (a[j] <= b);
    }
  }

  cout << r << endl;
}
