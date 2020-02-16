#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, max = 0;
  map<string, int> s;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string tmp;
    cin >> tmp;
    s[tmp]++;
  }
  for (auto &item : s)
  {
    if (max < item.second)
    {
      max = item.second;
    }
  }
  for (auto &item : s)
  {
    if (max == item.second)
    {
      cout << item.first << endl;
    }
  }
}
