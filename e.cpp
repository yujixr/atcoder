#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  int h, w, n = 0;
  atcoder::modint1000000007 r = 0;
  array<array<bool, 2000>, 2000> s;

  cin >> h >> w;
  for (int y = 0; y < h; y++)
  {
    string ts;
    cin >> ts;
    for (int x = 0; x < w; x++)
    {
      s[x][y] = ts[x] == '#';
      n += ts[x] == '.';
    }
  }

  atcoder::modint1000000007 nn = 2;
  nn = nn.pow(n);

  for (int x = 0; x < w; x++)
  {
    for (int y = 0; y < h; y++)
    {
      if (s[x][y])
        continue;

      int tr = 0;
      atcoder::modint1000000007 ttr = 2;
      if (x == 0 || s[x - 1][y])
        for (int tx = x; tx < w && !s[tx][y]; tx++)
          tr++;
      r += (nn - ttr.pow(tr)) * tr;

      tr = 0;
      ttr = 2;
      if (y == 0 || s[x][y - 1])
        for (int ty = y; ty < h && !s[x][ty]; ty++)
          tr++;
      r += (nn - ttr.pow(tr)) * tr;
    }
  }

  cout << r.val() << endl;
}
