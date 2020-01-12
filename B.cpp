#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, m, sum = 0, r;
  cin >> n >> k >> m;
  for (int i = 0; i < n - 1; i++)
  {
    int tmp;
    cin >> tmp;
    sum += tmp;
  }
  r = m * n - sum;
  if (m > k || r > k)
  {
    cout << "-1" << endl;
  }
  else if (r < 0)
  {
    cout << "0" << endl;
  }
  else
  {
    cout << r << endl;
  }
}
