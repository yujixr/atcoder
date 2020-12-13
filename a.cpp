#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, ln = 0, rn = 0, step = 0, lst = INT32_MAX, rst = INT32_MIN;
  string s;
  cin >> n >> a >> s;
  s = 'X' + s + 'X';
  for (int i = 0; i < n + 2; i++)
  {
    if (s[i] == '#')
    {
      step += abs(a - i) * 2;
      if (i < a)
      {
        ln++;
        if (lst > i)
          lst = i;
      }
      else
      {
        rn++;
        if (rst < i)
          rst = i;
      }
    }
  }
  if (rn > ln)
  {
    step += a * 2 * (rn - ln - 1);
    step -= (rst - a);
  }
  else
  {
    step += (n + 1 - a) * 2 * (ln - rn);
    step -= (a - lst);
  }
  cout << step << endl;
}
