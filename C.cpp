#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<int> a, b;
  int graph[100][100] = {INT16_MAX};
  cin>>n;
  for (int i = 0; i < n - 1; i++)
  {
    int ta, tb;
    cin >> ta >> tb;
    ta--;
    tb--;
    a.push_back(min(ta, tb));
    b.push_back(max(ta, tb));
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < a.size(); j++)
    {
      if (a[j] == i)
      {
        graph[i][b[j]] = 1;
        for (int k = 0; k < i; k++)
        {
          if (graph[k][i] + 1 < graph[k][b[j]])
          {
            graph[k][b[j]] = graph[k][i] + 1;
          }
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << graph[i][j] << ' ';
    }
    cout << endl;
  }
}
