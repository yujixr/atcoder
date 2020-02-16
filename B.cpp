#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (tmp % 2 == 0 && tmp % 3 != 0 && tmp % 5 != 0)
    {
      cout << "DENIED" << endl;
      return 0;
    }
  }
  cout << "APPROVED" << endl;
}
