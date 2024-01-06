#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n;
  cin >> n;
  for (int x = 0; x <= n; x++)
    for (int y = 0; y <= n; y++)
      for (int z = 0; x + y + z <= n; z++)
        cout << x << ' ' << y << ' ' << z << endl;
}
