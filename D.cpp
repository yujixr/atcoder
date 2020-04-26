#include <bits/stdc++.h>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using BigInt = mp::cpp_int;

int main()
{
  string s;
  cin >> s;
  int r = 0;

  for (int i = 0; i < s.length(); i++)
  {
    for (int j = i + 4; j < s.length(); j++)
    {
      if (BigInt(s.substr(i, j - i + 1)) % 2019 == 0)
      {
        r++;
      }
    }
  }
  cout << r << endl;
}
