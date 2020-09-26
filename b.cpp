#include <bits/stdc++.h>
using namespace std;

int main()
{
  uintmax_t a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (max(a, c) <= min(b, d) ? "Yes" : "No") << endl;
}
