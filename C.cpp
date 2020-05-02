#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, q, a[50], b[50], c[50], d[50];
  cin >> n >> m >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  int A[10];
  for (int i = 0; i < n; i++)
  {
    A[i] = 1;
  }

  uint64_t max = 0;
  while (1)
  {
    uint64_t pt = 0;
    for (int i = 0; i < q; i++)
    {
      if (A[b[i] - 1] - A[a[i] - 1] == c[i])
      {
        pt += d[i];
      }
    }

    if (pt > max)
    {
      max = pt;
    }

    for (int i = n - 1; i >= 0; i--)
    {
      if (A[i] == m)
      {
        if (i == 0)
        {
          cout << max << endl;
          return 0;
        }
        continue;
      }

      A[i]++;
      for (int j = i + 1; j < n; j++)
      {
        A[j] = A[i];
      }
      break;
    }
  }
}
