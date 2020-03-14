#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;

int main()
{
  mp::cpp_int h, w;
  cin >> h >> w;
  cout << (h * w + 1) / 2 << endl;
}
