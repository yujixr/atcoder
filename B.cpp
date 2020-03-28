#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cout << (n / 500) * 1000 + ((n - (n / 500) * 500) / 5) * 5 << endl;
}
