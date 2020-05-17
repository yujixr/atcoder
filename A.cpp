#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  switch (n % 10)
  {
  case 3:
    cout << "bon" << endl;
    return 0;
  case 0:
  case 1:
  case 6:
  case 8:
    cout << "pon" << endl;
    return 0;
  default:
    cout << "hon" << endl;
  }
}
