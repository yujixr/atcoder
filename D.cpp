#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k;
  cin >> k;
  queue<int64_t> q({1, 2, 3, 4, 5, 6, 7, 8, 9});
  for (int i = 0; i < k - 1; i++)
  {
    auto x = q.front();
    auto mod = x % 10;
    q.pop();
    if (mod != 0)
    {
      q.push(x * 10 + mod - 1);
    }
    q.push(x * 10 + mod);
    if (mod != 9)
    {
      q.push(x * 10 + mod + 1);
    }
  }
  cout << q.front() << endl;
}
