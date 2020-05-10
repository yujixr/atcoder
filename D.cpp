#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a[200000], nV[200000] = {0};
  uint64_t k;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    a[i] = tmp - 1;
  }

  int cur = 0, loopstart, loopstep = 0;
  ;
  nV[0]++;
  while (1)
  {
    cur = a[cur];
    nV[cur]++;
    loopstep++;
    if (nV[cur] == 2)
    {
      loopstart = cur;
      break;
    }
  }

  cur = 0;
  int step = 0;
  while (1)
  {
    if (cur == loopstart)
    {
      break;
    }
    cur = a[cur];
    step++;
  }
  loopstep -= step;

  if (step > k)
  {
    cur = 0;
  }
  else
  {
    k -= step;
    k %= loopstep;
    cur = loopstart;
  }
  for (uint64_t i = 0; i < k; i++)
  {
    cur = a[cur];
  }

  cout << cur + 1 << endl;
}
