#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t sum = 0;
  int k;
  cin >> k;
  for (int a = 1; a <= k; a++)
  {
    for (int b = 1; b <= k; b++)
    {
      int abgcd = __gcd(a, b);
      for (int c = 1; c <= k; c++)
      {
        sum += __gcd(abgcd, c);
      }
    }
  }
  cout << sum << endl;
}
