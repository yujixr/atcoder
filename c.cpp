#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, r = 0;
  cin >> n;
  for (int i = 1; i < n; i++)
  {
    r += (n - 1) / i;
  }
  cout << r << endl;
}
