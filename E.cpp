#include <bits/stdc++.h>
using namespace std;

struct magic
{
  int a, b;
  float c;
};

int cmp(const void *a, const void *b)
{
  return (*(magic *)b).c - (*(magic *)a).c;
}

int main()
{
  int h, n, r;
  magic m[1000];
  cin >> h >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> m[i].a >> m[i].b;
    m[i].c = (float)m[i].a / m[i].b;
  }
  qsort(m, n, sizeof(magic), cmp);
  r = (h / m[0].a) * m[0].b;
  h %= m[0].a;
  if (h > 0)
  {
    int r_tmp = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      int tmp = (h % m[i].a ? h / m[i].a + 1 : h / m[i].a) * m[i].b;
      if (r_tmp > tmp)
      {
        r_tmp = tmp;
      }
    }
    r += r_tmp;
  }
  cout << r << endl;
}
