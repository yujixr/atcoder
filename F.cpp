#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, u, v, a[100000], b[100000];
  bool route[100000][100000] = {{false}};
  cin >> n >> u >> v;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
    route[a[i]][b[i]] = true;
  }
}
