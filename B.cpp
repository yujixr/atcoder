#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  char s1[100] = "", s2[100] = "";
  cin >> n;
  if (n % 2)
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < n / 2; i++)
  {
    cin >> s1[i];
  }
  for (int i = 0; i < n / 2; i++)
  {
    cin >> s2[i];
  }
  if (strcmp(s1, s2))
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}
