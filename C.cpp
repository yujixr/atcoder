#include <bits/stdc++.h>
using namespace std;

int cmp(const void *a, const void *b)
{
  return *(uint64_t *)b - *(uint64_t *)a;
}

int main()
{
  int n, k;
  uint64_t h[200000], r = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  if (n <= k)
  {
    cout << 0 << endl;
    return 0;
  }
  qsort(h, n, sizeof(uint64_t), cmp);
  for (int i = k; i < n; i++)
  {
    r += h[i];
  }
  cout << r << endl;
}
