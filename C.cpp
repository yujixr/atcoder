#include <bits/stdc++.h>
using namespace std;

int ds(int n)
{
  int sum = n % 10;
  while (n /= 10)
  {
    sum += n % 10;
  }
  return sum;
}

int check(int n)
{
  int r = 0;
  for (int i = 1; i < n; i++)
  {
    if (ds(n - i) == i)
    {
      r += check(n - i) + 1;
    }
  }
  return r;
}

int main()
{
  int n;
  cin >> n;

  cout << check(n) + 1 << endl;
}
