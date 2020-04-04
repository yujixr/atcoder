#include <bits/stdc++.h>
using namespace std;

int main()
{
  bool iss = false;
  int k, l = 1;
  vector<int> k3;
  cin >> k;

  for (int re = 9; re < k; re *= 3)
  {
    re -= l - 1 + max(l - 2, 0);
    k -= re;
    iss = k >= re;
    l++;
  }
  k--;

  k3.push_back(k % 3);
  while (k /= 3)
  {
    k3.push_back(k % 3);
  }
  reverse(k3.begin(), k3.end());
  for (auto kk : k3)
  {
    cout << kk;
  }
  cout << endl;

  int bf = k3[0] + 1, st = 1;
  if (iss)
  {
    bf = k3[0] * 3 + k3[1] + 1;
    st = 2;
  }
  cout << bf;
  for (int i = st; i < k3.size(); i++)
  {
    bf += k3[i] - 1;
    cout << bf;
  }
  cout << endl;
}
