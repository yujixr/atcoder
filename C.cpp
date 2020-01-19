#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, p, min, sum = 0;
  cin >> n;
  min = n + 1;
  for (int i = 0; i < n; i++)
  {
    cin >> p;
    if (p < min)
    {
      sum++;
      min = p;
    }
  }
  cout<<sum<<endl;
}
