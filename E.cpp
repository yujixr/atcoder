#include <bits/stdc++.h>
using namespace std;

int compare_int(const void *a, const void *b)
{
  return *(int *)b - *(int *)a;
}

int compare_int2(const void *a, const void *b)
{
  return *(int *)a - *(int *)b;
}

int main()
{
  int n, k;
  int a[200000], f[200000];

  cin >> n;
  cin >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> f[i];
  }
  qsort(a, n, sizeof(int), compare_int);
  qsort(f, n, sizeof(int), compare_int);

  int num = 0;

  for (int i = 0; i < n; i++)
  {
    if (k >= a[i])
    {
      k -= a[i];
      a[i] = 0;
      num++;
    }
    else if (k == 0)
    {
      break;
    }
    else
    {
      a[i] -= k;
      k = 0;
    }
  }
  
  qsort(a, n, sizeof(int), compare_int2);

  int ans = 0;

  for (int i = 0; i < n - num; i++)
  {
    ans+=a[i]*f[i];
  }
  printf("%d\n",ans);
}
