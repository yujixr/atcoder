#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int v_min = ceil(max(a * 12.5, b * 10.0)), v_max = ceil(min(a * 12.5 + 12.5, b * 10.0 + 10));
  if (v_min < v_max)
    cout << v_min << endl;
  else
    cout << -1 << endl;
}
