#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  vector<bool> b;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int d[2];
    cin >> d[0] >> d[1];
    b.push_back(d[0] == d[1]);
    if (i >= 2 && b[i] && b[i - 1] && b[i - 2])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
