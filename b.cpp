#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

#define N 100

int main()
{
  int id, n, k;
  array<array<int, N>, N> s;
  cin >> id >> n >> k;
  cout << '{' << endl;
  for (int i = 0; i < N; i++)
  {
    cout << '{';
    string tmp;
    cin >> tmp;
    for (int j = 0; j < N; j++)
    {
      s[i][j] = tmp[j] - '0';
      cout << tmp[j] - '0' << ", ";
    }
    cout << '}' << endl;
  }
  cout << '}' << endl;
}
