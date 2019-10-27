#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned long long N;
  cin >> N;
  unsigned long long sN = sqrt(N);
  unsigned long long ans = 0;
  for (int i = sN; i > 0; i--)
  {
    if (N % i == 0)
    {
      ans = i + (N / i) - 2;
      break;
    }
  }
  cout << ans << endl;
}
