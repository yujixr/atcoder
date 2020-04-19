#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a[200000] = {0};
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    int tmp;
    cin >> tmp;
    a[tmp - 1]++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << endl;
  }
}
