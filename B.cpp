#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  if (y % 2 != 0 || y > x * 4 || y < x * 2)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}
