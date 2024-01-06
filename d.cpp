#include <iostream>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));
  matrix[(n - 1) / 2][(n - 1) / 2] = n * n;

  int pos_x = 0, pos_y = 0, dx = 1, dy = 0;
  for (int i = 1; i < n * n; i++)
  {
    if (pos_x < 0 || pos_y < 0 || pos_x == n || pos_y == n || matrix[pos_x][pos_y] != 0)
    {
      pos_x -= dx;
      pos_y -= dy;

      if (dx == 1)
      {
        dx = 0;
        dy = 1;
      }
      else if (dy == 1)
      {
        dx = -1;
        dy = 0;
      }
      else if (dx == -1)
      {
        dx = 0;
        dy = -1;
      }
      else if (dy == -1)
      {
        dx = 1;
        dy = 0;
      }

      pos_x += dx;
      pos_y += dy;
    }
    matrix[pos_x][pos_y] = i;

    pos_x += dx;
    pos_y += dy;
  }

  for (int y = 0; y < n; y++)
  {
    for (int x = 0; x < n; x++)
    {
      if (matrix[x][y] == n*n)
      {
        cout << "T ";
      }
      else
      {
        cout << matrix[x][y] << ' ';
      }
    }
    cout << endl;
  }
}
