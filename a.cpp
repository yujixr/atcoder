#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n, sum_x = 0, sum_y = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    sum_x += x;
    sum_y += y;
  }

  if (sum_x > sum_y)
  {
    cout << "Takahashi" << endl;
  }
  else if (sum_x < sum_y)
  {
    cout << "Aoki" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }
}
