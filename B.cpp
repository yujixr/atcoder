#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, sum = 0;
  vector<int> p;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    p.push_back(tmp);
  }
  sort(p.begin(), p.end());
  for (int i = 0; i < k; i++)
  {
    sum += p[i];
  }
  cout << sum << endl;
}
