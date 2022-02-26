#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int a[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> a[i];
  }

  cout << a[a[a[0]]] << endl;
}
