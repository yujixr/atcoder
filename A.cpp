#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, a;
  cin >> h >> a;
  if (h % a == 0)
  {
    cout << h / a << endl;
  }
  else
  {
    cout << h / a + 1 << endl;
  }
}
