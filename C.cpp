#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  vector<int> h;
  cin >> n >> m;
  vector<bool> rr(n, false);
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    h.push_back(t);
  }
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (h[a] == h[b])
    {
      rr[a] = true;
      rr[b] = true;
    }
    else if (h[a] < h[b])
    {
      rr[a] = true;
    }
    else
    {
      rr[b] = true;
    }
  }

  int r = 0;
  for (int i = 0; i < n; i++)
  {
    if (rr[i] == false)
    {
      r++;
    }
  }
  cout << r << endl;
}
