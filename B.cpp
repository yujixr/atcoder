#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, m, min_v;
  cin >> a >> b >> m;
  vector<int> as(a), bs(b);
  for (int i = 0; i < a; i++)
  {
    cin >> as[i];
  }
  for (int i = 0; i < b; i++)
  {
    cin >> bs[i];
  }
  min_v = *min_element(as.begin(), as.end()) + *min_element(bs.begin(), bs.end());
  for (int i = 0; i < m; i++)
  {
    int x, y, c;
    cin >> x >> y >> c;
    int v = as[x - 1] + bs[y - 1] - c;
    if (v < 0)
    {
      v = 0;
    }
    if (v < min_v)
    {
      min_v = v;
    }
  }
  cout << min_v << endl;
}
