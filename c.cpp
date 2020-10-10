#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  int n, m = 0;
  unordered_set<int> p;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int tp;
    cin >> tp;
    p.insert(tp);

    if (tp == m)
      while (p.find(++m) != p.end())
        ;

    cout << m << endl;
  }
}
