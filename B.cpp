#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t x, c = 100;
  cin >> x;

  for (uint64_t i = 1; true; i++)
  {
    c *= 1.01;
    if (c >= x)
    {
      cout << i << endl;
      return 0;
    }
  }
}
