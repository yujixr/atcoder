#include <bits/stdc++.h>
using namespace std;

void sort2vectors(vector<int> &av, vector<int> &bv)
{
  int n = av.size();
  vector<int> p(n), av2(n), bv2(n);
  iota(p.begin(), p.end(), 0);
  sort(p.begin(), p.end(), [&](int a, int b) { return av[a] < av[b]; });
  for (int i = 0; i < n; i++)
  {
    av2[i] = av[p[i]];
    bv2[i] = bv[p[i]];
  }
  av = av2;
  bv = bv2;
}

int main()
{
  int n, color[100000], used[100000] = {0}, parent[100000] = {0}, max = 0;
  vector<int> a(0), b(0);
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    int at, bt;
    cin >> at >> bt;
    a.push_back(at);
    b.push_back(bt);
  }
  sort2vectors(a, b);
  for (int i = 0; i < n - 1; i++)
  {
    do
    {
      color[i] = ++used[a[i]];
    } while (color[i] == parent[a[i]]);
    parent[b[i]] = color[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (max < color[i])
    {
      max = color[i];
    }
  }
  cout << max << endl;
  for (int i = 0; i < n - 1; i++)
    cout << color[i] << endl;
}
