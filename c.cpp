#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<pair<int, int>> cords;
  for (int i = n; i >= 1; i--)
  {
    cords.push_back(make_pair(i, 0));
  }

  for (int i = 0; i < q; i++)
  {
    int command, p;
    char c;
    cin >> command;
    if (command == 1)
    {
      cin >> c;
      switch (c)
      {
      case 'R':
        cords.push_back(make_pair(cords.back().first + 1, cords.back().second));
        break;
      case 'L':
        cords.push_back(make_pair(cords.back().first - 1, cords.back().second));
        break;
      case 'U':
        cords.push_back(make_pair(cords.back().first, cords.back().second + 1));
        break;
      case 'D':
        cords.push_back(make_pair(cords.back().first, cords.back().second - 1));
        break;

      default:
        break;
      }
    }
    else
    {
      cin >> p;
      cout << cords[cords.size() - p].first << ' ' << cords[cords.size() - p].second << endl;
    }
  }
}
