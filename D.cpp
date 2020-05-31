#include <bits/stdc++.h>
using namespace std;

std::vector<int> sieve(int n)
{
  std::vector<int> res(n);
  std::iota(res.begin(), res.end(), 0);
  for (int i = 2; i * i < n; ++i)
  {
    if (res[i] < i)
      continue;
    for (int j = i * i; j < n; j += i)
      if (res[j] == j)
        res[j] = i;
  }
  return res;
}

std::vector<int> factor(int n, const std::vector<int> &min_factor)
{
  std::vector<int> res;
  while (n > 1)
  {
    res.push_back(min_factor[n]);
    n /= min_factor[n];
  }
  return res;
}

int main()
{
  uint64_t n, r = 0;
  cin >> n;

  vector<bool> primeflag(n + 2, true);
  for (uint64_t i = 2; n != 1; i++)
  {
    if (primeflag[i])
    {
      for (uint64_t j = i * 2; j < n; j += i)
      {
        primeflag[j] = false;
      }

      int tr = 0;
      for (; n % i == 0; n /= i)
      {
        tr++;
      }

      for (int j = 1; tr >= j; j++)
      {
        r++;
        tr -= j;
      }
    }
  }

  cout << r << endl;
}
