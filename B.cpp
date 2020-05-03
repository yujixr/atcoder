#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;

  vector<bool> a(n, false);
  for (int i = 0; i < k; i++)
  {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int tmp;
      cin >> tmp;
      a[tmp - 1] = true;
    }
  }

  int r = 0;
  for (int i = 0; i < n; i++)
  {
    if (!a[i])
    {
      r++;
    }
  }
  cout << r << endl;
}
