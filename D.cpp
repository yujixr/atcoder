#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;

  for (int a = 0; true; a++)
  {
    int b5 = x - pow(a, 5);
    for (int b = 0; b <= b5; b++)
    {
      if (a - b == 0 || x % (a - b) != 0)
      {
        continue;
      }
      if (pow(b, 5) == abs(b5))
      {
        if (b5 > 0)
        {
          b *= -1;
        }
        cout << a << ' ' << b << endl;
        return 0;
      }
    }
  }
}
