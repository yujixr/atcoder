#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int r, x, y;
  cin >> r >> x >> y;
  cout << ceil((x * x + y * y) / (float)(r * r)) << endl;
}
