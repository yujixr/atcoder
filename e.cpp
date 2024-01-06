#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int dfs(vector<vector<int>> &path, int n, int v)
{
  if (n == v)
    return 0;

  if (path[v].size() == 0)
    return -1;

  int max = -1;
  for (auto v_to : path[v])
  {
    int r = dfs(path, n, v_to);
    max = r > max ? r : max;
  }

  return max == -1 ? -1 : max + 1;
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> a;
  for (int i = 0; i < n; i++)
  {
    int at;
    cin >> at;
    a.push_back(at);
  }

  vector<vector<int>> path(n);
  for (int i = 0; i < m; i++)
  {
    int ut, vt;
    cin >> ut >> vt;
    if (a[ut - 1] <= a[vt - 1])
      path[ut - 1].push_back(vt - 1);
    if (a[vt - 1] <= a[ut - 1])
      path[vt - 1].push_back(ut - 1);
  }

  cout << dfs(path, n - 1, 0) + 1 << endl; // 0-indexed
}
