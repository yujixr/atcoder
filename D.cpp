#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, x;
  long double radian;
  cin >> a;
  cin >> b;
  cin >> x;

  long double len = ((long double)(2 * x) / (a * a)) - b;
  if (len > 0)
  {
    radian = atan2l((long double)a, b - len);
  }
  else
  {
    len = (long double)(2 * x) / (a * b);
    radian = atan2l(len, (long double)b);
  }
  long double degree = radian * 180 / M_PI;
  printf("%Lf\n",90-degree);
}
