#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t n;
  cin >> n;
  if (n % 2 == 0)
  {
    n /= 2;
    uint64_t r = 0;
    for (uint64_t i = 0; i <= 100; i++)
    {
      r += (n /= 5);
    }
    cout << r << endl;
  }
  else
  {
    cout << 0 << endl;
  }
}
