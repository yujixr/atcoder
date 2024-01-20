#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  string s;
  cin >> s;

  bool is_b_seen = false, is_c_seen = false;
  for (auto c : s)
  {
    switch (c)
    {
    case 'A':
      if (is_b_seen || is_c_seen)
        goto error;
      break;

    case 'B':
      is_b_seen = true;
      if (is_c_seen)
        goto error;
      break;

    case 'C':
      is_c_seen = true;
      break;

    default:
      break;
    }
  }
ok:
  cout << "Yes" << endl;
  return 0;
error:
  cout << "No" << endl;
}
