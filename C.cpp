#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w, k;
  bool map[6][6];
  cin >> h >> w >> k;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char c;
      cin >> c;
      map[i][j] = c == '#';
    }
  }
}
