#include <bits/stdc++.h>

using namespace std;

int main()
{
  int64_t n, r = 0;
  cin >> n;
  while (n)
  {
    int k = n % 10;
    n /= 10;
    if (k <= 5)
    {
      r += k;
    }
    else
    {
      n++;
      r += 10 - k;
    }
  }
  cout << r << endl;
}
