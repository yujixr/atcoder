#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, n;
  cin >> h >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    h -= tmp;
  }
  if (h <= 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
