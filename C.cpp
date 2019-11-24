#include <bits/stdc++.h>
using namespace std;

uint64_t a, b, x;

uint64_t get(uint64_t n, uint64_t d)
{
  return a * n + b * d;
}

int main()
{
  cin >> a >> b >> x;
  if (get(1, 1) > x)
  {
    cout << 0 << endl;
  }
  else if (get(10, 2) > x)
  {
    cout << (x - b) / a << endl;
  }
  else if (get(100, 3) > x)
  {
    cout << (x - b * 2) / a << endl;
  }
  else if (get(1000, 4) > x)
  {
    cout << (x - b * 3) / a << endl;
  }
  else if (get(10000, 5) > x)
  {
    cout << (x - b * 4) / a << endl;
  }
  else if (get(100000, 6) > x)
  {
    cout << (x - b * 5) / a << endl;
  }
  else if (get(1000000, 7) > x)
  {
    cout << (x - b * 6) / a << endl;
  }
  else if (get(10000000, 8) > x)
  {
    cout << (x - b * 7) / a << endl;
  }
  else if (get(100000000, 9) > x)
  {
    cout << (x - b * 8) / a << endl;
  }
  else
  {
    cout << 100000000 << endl;
  }
  return 0;
}
