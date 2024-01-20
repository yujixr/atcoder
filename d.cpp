#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int h, w, k;
  cin >> h >> w >> k;

  vector<vector<int>> grid(h, vector<int>(w));
  for (int y = 0; y < h; y++)
  {
    string s;
    cin >> s;

    for (int x = 0; x < w; x++)
      grid[y][x] = s[x];
  }

  int min_num_dots = 2147483647;

  for (int y = 0; y < h && w >= k; y++)
  {
    vector<int> num_dots(w - k + 1, 0);
    vector<int> num_xs(w - k + 1, 0);
    for (int x = 0; x < k; x++)
    {
      switch (grid[y][x])
      {
      case '.':
        num_dots[0]++;
        break;

      case 'x':
        num_xs[0]++;
        break;

      default:
        break;
      }
    }

    if (num_xs[0] == 0 && num_dots[0] < min_num_dots)
      min_num_dots = num_dots[0];
    for (int x = 1; x < w - k + 1; x++)
    {

      num_dots[x] = num_dots[x - 1];
      num_xs[x] = num_xs[x - 1];

      // Vanished
      switch (grid[y][x - 1])
      {
      case '.':
        num_dots[x] -= 1;
        break;

      case 'x':
        num_xs[x] -= 1;
        break;

      default:
        break;
      }

      // Added
      switch (grid[y][x + k - 1])
      {
      case '.':
        num_dots[x] += 1;
        break;

      case 'x':
        num_xs[x] += 1;
        break;

      default:
        break;
      }

      if (num_xs[x] == 0 && num_dots[x] < min_num_dots)
        min_num_dots = num_dots[x];
    }
  }

  for (int x = 0; x < w && h >= k; x++)
  {
    vector<int> num_dots(h - k + 1, 0);
    vector<int> num_xs(h - k + 1, 0);
    for (int y = 0; y < k; y++)
    {
      switch (grid[y][x])
      {
      case '.':
        num_dots[0]++;
        break;

      case 'x':
        num_xs[0]++;
        break;

      default:
        break;
      }
    }

    if (num_xs[0] == 0 && num_dots[0] < min_num_dots)
      min_num_dots = num_dots[0];
    for (int y = 1; y < h - k + 1; y++)
    {
      num_dots[y] = num_dots[y - 1];
      num_xs[y] = num_xs[y - 1];

      // Vanished
      switch (grid[y - 1][x])
      {
      case '.':
        num_dots[y] -= 1;
        break;

      case 'x':
        num_xs[y] -= 1;
        break;

      default:
        break;
      }

      // Added
      switch (grid[y + k - 1][x])
      {
      case '.':
        num_dots[y] += 1;
        break;

      case 'x':
        num_xs[y] += 1;
        break;

      default:
        break;
      }

      if (num_xs[y] == 0 && num_dots[y] < min_num_dots)
        min_num_dots = num_dots[y];
    }
  }

  if (min_num_dots == 2147483647)
    cout << -1 << endl;
  else
    cout << min_num_dots << endl;
}
