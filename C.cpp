#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;

int main()
{
  mp::cpp_int a, b, c;
  cin >> a >> b >> c;
  if (c - a - b < 0)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << (((4 * a * b) < (c - a - b) * (c - a - b)) ? "Yes" : "No") << endl;
}
