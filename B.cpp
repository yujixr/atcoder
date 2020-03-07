#include <bits/stdc++.h>
using namespace std;

int main()
{
  uint64_t a, b, n;
  cin >> n >> a >> b;
  uint64_t r = (n % (a + b));
  if (r > a)
    r = a;
  cout << (n / (a + b)) * a + r << endl;
}
