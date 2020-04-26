#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  unordered_set<string> gacha;

  for (int i = 0; i < n; i++)
  {
    string tmp;
    cin >> tmp;
    gacha.insert(tmp);
  }
  
  cout << gacha.size() << endl;
}
