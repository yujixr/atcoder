#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (ceil(a / (double)d) >= ceil(c / (double)b) ? "Yes" : "No") << endl;
}
