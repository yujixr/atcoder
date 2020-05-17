#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double an = (h * 30 - m * 6) / 180.0 * M_PI;

  cout << cos(an) * b - a << endl;
  cout << sin(an) * b << endl;
  cout << sqrt(pow(sin(an) * b, 2) + pow(cos(an) * b - a, 2)) << endl;
}
