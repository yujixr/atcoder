#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t n, r = 0;
  cin >> n;
  for (uint64_t i = 1; i <= n; i++)
  {
    r += (n / i) * ((n - (n % i)) + i) / 2;
  }
  cout << r << endl;
}
