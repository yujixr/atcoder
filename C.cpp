#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t a, b;
  cin >> a >> b;
  if (a < b)
  {
    uint64_t tmp = a;
    a = b;
    b = tmp;
  }
  uint64_t r = a % b, x = a * b;
  while (r != 0)
  {
    a = b;
    b = r;
    r = a % b;
  }
  cout << x / b << endl;
}
