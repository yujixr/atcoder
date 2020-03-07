#include <bits/stdc++.h>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;

int main()
{
  int n, p, r = 0, keta;
  string s;
  mp::cpp_int m;
  cin >> n >> p;
  cin >> s;

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (m.assign(s.substr(i, j - i + 1)) % p == 0)
        r++;
      cout << i << ":" << j << " " << m << " " << m % p << endl;
    }
    cout << endl;
  }
  cout << r << endl;
}
