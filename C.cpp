#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, n;
  vector<int> p;
  cin >> x >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    p.push_back(tmp);
  }
  for (int d = 0;; d++)
  {
    if (find(p.begin(), p.end(), x - d) == p.end())
    {
      cout << x - d << endl;
      return 0;
    }
    if (find(p.begin(), p.end(), x + d) == p.end())
    {
      cout << x + d << endl;
      return 0;
    }
  }
}
