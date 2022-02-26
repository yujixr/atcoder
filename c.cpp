#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main()
{
  int n;
  vector<vector<bool>> s;

  cin >> n;
  for (int y = 0; y < n; y++)
  {
    vector<bool> sn;
    string str_s;
    cin >> str_s;

    for (int x = 0; x < n; x++)
    {
      sn.push_back(str_s[x] == '#');
    }
    s.push_back(sn);
  }

  for (int y = 0; y < n; y++)
  {
    int white_1 = -1, white_2 = -1, white_3 = -1;
    for (int x = 0; x < n; x++)
    {
      if (s[y][x] == false)
      {
        white_3 = white_2;
        white_2 = white_1;
        white_1 = x;
      }

      if (x - 5 > white_3)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  for (int x = 0; x < n; x++)
  {
    int white_1 = -1, white_2 = -1, white_3 = -1;
    for (int y = 0; y < n; y++)
    {
      if (s[y][x] == false)
      {
        white_3 = white_2;
        white_2 = white_1;
        white_1 = y;
      }

      if (y - 5 > white_3)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  for (int i = -n; i < n; i++)
  {
    int white_1 = -1, white_2 = -1, white_3 = -1;
    for (int j = 0; j < n; j++)
    {
      if (i + j >= 0 && i + j < n)
      {
        if (s[i + j][j] == false)
        {
          white_3 = white_2;
          white_2 = white_1;
          white_1 = j;
        }

        if (j - 5 > white_3)
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
      else
      {
        white_3 = j;
        white_2 = j;
        white_1 = j;
      }
    }
  }

  for (int i = -n; i < n; i++)
  {
    int white_1 = -1, white_2 = -1, white_3 = -1;
    for (int j = 0; j < n; j++)
    {
      if (i + j >= 0 && i + j < n)
      {
        if (s[i + j][n - j - 1] == false)
        {
          white_3 = white_2;
          white_2 = white_1;
          white_1 = j;
        }

        if (j - 5 > white_3)
        {
          cout << "Yes" << endl;
          return 0;
        }
      }
      else
      {
        white_3 = j;
        white_2 = j;
        white_1 = j;
      }
    }
  }

  cout << "No" << endl;
}
