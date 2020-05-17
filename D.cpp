#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;

  cin >> n >> m;
  vector<pair<int, int>> room(n);
  vector<pair<int, int>> route(m);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    route[i] = make_pair(min(a, b), max(a, b));
  }
}
