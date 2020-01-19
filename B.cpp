#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if (a < b)
  {
    for (int i = 0; i < b; i++)
    {
      cout << a;
    }
    cout << endl;
    return 0;
  }
  for (int i = 0; i < a; i++)
  {
    cout << b;
  }
  cout << endl;
}
