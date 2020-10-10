#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  int h, w, r = 0;
  array<array<bool, 100>, 100> s;

  cin >> h >> w;
  for (int i = 0; i < h; i++)
  {
    string tts;

    cin >> tts;
    for (int j = 0; j < tts.length(); j++)
    {
      s[i][j] = tts[j] == '#';
      if (i != 0 && s[i - 1][j] == s[i][j])
        r++;
      if (j != 0 && s[i][j - 1] == s[i][j])
        r++;
    }
  }
  cout << r << endl;
}
