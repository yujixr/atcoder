#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x[10], y[10];
  long double result = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    cin >> y[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      result += sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
    }
  }
  printf("%Lf", result * 2 / n);
  // cout << result * 2 / n << endl;
}
