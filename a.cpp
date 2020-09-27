#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

#define N 100
#define K 9

int id, n, k;
array<array<int, N>, N> s;
array<vector<pair<int, int>>, K> colorpoints;

void search(const int x, const int y, int color = K)
{
  if (color == K)
    color = s[x][y];
  else if (s[x][y] != color)
    return;

  s[x][y] += K;

  if (x < N - 1)
    search(x + 1, y, color);
  if (x > 0)
    search(x - 1, y, color);
  if (y < N - 1)
    search(x, y + 1, color);
  if (y > 0)
    search(x, y - 1, color);
}

int main()
{
  cin >> id >> n >> k;
  for (int y = 0; y < N; y++)
  {
    string tmp;
    cin >> tmp;
    for (int x = 0; x < N; x++)
    {
      s[x][y] = tmp[x] - '1';
    }
  }

  for (int y = 0; y < N; y++)
  {
    for (int x = 0; x < N; x++)
    {
      if (s[x][y] >= K)
        continue;

      colorpoints[s[x][y]].push_back(make_pair(x, y));
      search(x, y);
    }
  }

  int max = 0, sum = 0;
  for (int i = 0; i < K; i++)
  {
    sum += colorpoints[i].size();
    if (colorpoints[i].size() > colorpoints[max].size())
      max = i;
  }

  cout << sum - colorpoints[max].size() << endl;
  for (int i = 0; i < K; i++)
  {
    if (i == max)
      continue;

    for (auto &pos : colorpoints[i])
      cout << pos.first + 1 << ' ' << pos.second + 1 << ' ' << max + 1 << endl;
  }
}
