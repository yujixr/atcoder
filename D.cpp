#include <bits/stdc++.h>
using namespace std;

int h, w, route[400][400];
bool s[20][20] = {false};

int pack(int i, int j)
{
  return i * w + j;
}

void unpack(int packed, int *i, int *j)
{
  *i = packed / w;
  *j = packed - w * *i;
}

void setroute(int start, int end, int value)
{
  // if (end < start)
  // {
  //   int tmp = start;
  //   start = end;
  //   end = tmp;
  // }
  if (route[start][end] != -1 && route[start][end] <= value)
  {
    return;
  }

  route[start][end] = value;

  value++;

  int i, j;
  // unpack(start, &i, &j);
  // if (h > i + 1 && s[i + 1][j])
  // {
  //   setroute(pack(i + 1, j), end, value);
  // }
  // if (i - 1 >= 0 && s[i - 1][j])
  // {
  //   setroute(pack(i - 1, j), end, value);
  // }
  // if (w > j + 1 && s[i][j + 1])
  // {
  //   setroute(pack(i, j + 1), end, value);
  // }
  // if (j - 1 >= 0 && s[i][j - 1])
  // {
  //   setroute(pack(i, j - 1), end, value);
  // }

  unpack(end, &i, &j);
  if (h > i + 1 && s[i + 1][j])
  {
    setroute(start, pack(i + 1, j), value);
  }
  if (i - 1 >= 0 && s[i - 1][j])
  {
    setroute(start, pack(i - 1, j), value);
  }
  if (w > j + 1 && s[i][j + 1])
  {
    setroute(start, pack(i, j + 1), value);
  }
  if (j - 1 >= 0 && s[i][j - 1])
  {
    setroute(start, pack(i, j - 1), value);
  }
}

int main()
{
  memset(route, -1, sizeof(int) * 400 * 400);
  cin >> h >> w;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char tmp;
      cin >> tmp;
      if (tmp == '.')
      {
        s[i][j] = true;
      }
    }
  }

  for (int start = 0; start < h * w; start++)
  {
    int i, j;
    unpack(start, &i, &j);
    if (!s[i][j])
    {
      continue;
    }

    setroute(start, start, 0);
  }

  int max = 0;
  for (int start = 0; start < h * w; start++)
  {
    for (int end = 0; end < h * w; end++)
    {
      if (max < route[start][end])
      {
        max = route[start][end];
      }
      // int i1, j1, i2, j2;
      // unpack(start, &i1, &j1);
      // unpack(end, &i2, &j2);
      // cout << "[" << i1 << ":" << j1 << "] -> [" << i2 << ":" << j2 << "] : " << route[start][end] << endl;
    }
  }
  cout << max << endl;
}
