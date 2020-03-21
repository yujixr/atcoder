#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  bool s[100][100];
  cin >> h >> w;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char _s;
      cin >> _s;
      s[h][w] = _s == '#';
    }
  }
}
