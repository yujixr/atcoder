#include <bits/stdc++.h>
using namespace std;

int getDigit(int a, int b, int n)
{
  for (int i = 1; true; i++)
  {
    if (a * pow(10, i) + b > n)
    {
      return i - 2;
    }
  }
}

int build(int a, int b, int key, int digit)
{
  return a * pow(10, digit + 1) + key * 10 + b;
}

int getMax(int a, int b, int n)
{
  int digit = getDigit(a, b, n), left = 0, right = 0, mid, max;

  if (digit <= -1)
  {
    return -1;
  }
  if (digit == 0)
  {
    return 0;
  }

  for (int i = 0; i < digit; i++)
  {
    right += 9 * pow(10, i);
  }
  max = right;
  while (right >= left)
  {
    mid = left + (right - left) / 2;
    if (build(a, b, mid, digit) <= n)
      if (build(a, b, mid + 1, digit) > n || mid == max)
        return mid;
      else
        left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}

int getSum(int a, int b, int n)
{
  if(a==b&&a<10){
    return 1;
  }
  int max = getMax(a, b, n), digit = getDigit(a, b, n), r = 1;
  if (digit < 0)
  {
    return 0;
  }
  if (digit == 0)
  {
    return 1;
  }
  for (int i = 0; i < digit; i++)
  {
    r += pow(10, i);
  }
  r += max;
  return r;
}

int main()
{
  int n, dp[10][10], r = 0;
  cin >> n;

  for (int a = 1; a < 10; a++)
  {
    for (int b = 1; b < 10; b++)
    {
      dp[a][b] = getSum(a, b, n);
    }
  }

  for (int a = 1; a < 10; a++)
  {
    for (int b = 1; b < 10; b++)
    {
      r += dp[a][b] * dp[b][a];
    }
  }
  cout << r << endl;
}
