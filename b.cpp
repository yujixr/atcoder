#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  int h, w, r = 0;
  array<array<bool, 100>, 100> s;

  cin >> h >> w;
  for (int y = 0; y < h; y++)
  {
    string tts;

    cin >> tts;
    for (int x = 0; x < w; x++)
    {
      s[x][y] = tts[x] == '#';

      if (s[x][y])
        continue;

      if (x != 0 && s[x - 1][y] == s[x][y])
        r++;
      if (y != 0 && s[x][y - 1] == s[x][y])
        r++;
    }
  }
  cout << r << endl;
}
