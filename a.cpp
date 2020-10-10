#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  char s, t;
  cin >> s >> t;
  cout << (char)(t - 0x20*(s == 'Y')) << endl;
}
