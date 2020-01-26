#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t h, n = 1, r = 0;
  cin >> h;
  while (1)
  {
    r += n;
    if (h <= 1)
    {
      break;
    }
    h /= 2;
    n *= 2;
  }
  cout << r << endl;
}
