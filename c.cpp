#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n;
  cin >> n;

  int cur = -1;
  vector<int> next(n, -1);
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if (a == -1)
      cur = i;
    else
      next[a - 1] = i;
  }

  while (cur != -1)
  {
    cout << cur + 1 << ' ';
    cur = next[cur];
  }
  cout << endl;
}
