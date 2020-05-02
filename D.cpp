#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t a, b, n;
  cin >> a >> b >> n;

  uint64_t x = b - 1;
  if (x > n)
  {
    x = n;
  }
  cout << floor(a * x / b) << endl;
}
