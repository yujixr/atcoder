#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned int out = 0;
  unsigned int renzoku = 0;
  string s;
  unsigned int k;
  cin >> s;
  cin >> k;

  switch (k)
  {
  case 1:
    for (int i = 0; i < s.length(); i++)
    {
      // cout << s[i];
      if (i < s.length() - 1 && s[i] == s[i + 1])
      {
        renzoku++;
        // cout << renzoku;
      }
      else if (s[i] != s[i + 1] && s[i] == s[i - 1])
      {
        renzoku++;
        //cout << renzoku;
        out += renzoku / 2;
        renzoku = 0;
      }
      // cout << endl;
    }
    cout << out << endl;
    return 0;
  case 2:
    s += s;
    for (int i = 0; i < s.length(); i++)
    {
      // cout << s[i];
      if (i < s.length() - 1 && s[i] == s[i + 1])
      {
        renzoku++;
        // cout << renzoku;
      }
      else if (s[i] != s[i + 1] && s[i] == s[i - 1])
      {
        renzoku++;
        //cout << renzoku;
        out += renzoku / 2;
        renzoku = 0;
      }
      // cout << endl;
    }
    cout << out << endl;
    return 0;
  default:
    s += s;
    for (int i = 0; i < s.length(); i++)
    {
      // cout << s[i];
      if (i < s.length() - 1 && s[i] == s[i + 1])
      {
        renzoku++;
        // cout << renzoku;
      }
      else if (s[i] != s[i + 1] && s[i] == s[i - 1])
      {
        renzoku++;
        //cout << renzoku;
        out += renzoku / 2;
        renzoku = 0;
      }
      // cout << endl;
    }
    {
      int opt = 0;
      s += s;
      for (int i = 0; i < s.length(); i++)
      {
        // cout << s[i];
        if (i < s.length() - 1 && s[i] == s[i + 1])
        {
          renzoku++;
          // cout << renzoku;
        }
        else if (s[i] != s[i + 1] && s[i] == s[i - 1])
        {
          renzoku++;
          // cout << renzoku;
          opt += renzoku / 2;
          // cout << opt;
          renzoku = 0;
        }
        // cout << endl;
      }
      cout << (long long)(opt - out)/2 * (k - 2) + out << endl;
    }
  }

  // if (k % 2 == 1)
  // {
  //   unsigned int renzoku = 0;
  //   for (int i = 0; i < s.length(); i++)
  //   {
  //     // cout << s[i];
  //     if (i < s.length() - 1 && s[i] == s[i + 1])
  //     {
  //       renzoku++;
  //       // cout << renzoku;
  //     }
  //     else if (s[i] != s[i + 1] && s[i] == s[i - 1])
  //     {
  //       renzoku++;
  //       unsigned int temp = ((unsigned int)(renzoku / 2.0));
  //       // cout << temp;
  //       outoption += temp;
  //       renzoku = 0;
  //     }
  //     // cout << endl;
  //   }
  // }
  // s += s;

  // unsigned int renzoku = 0;
  // for (int i = 0; i < s.length(); i++)
  // {
  //   // cout << s[i];
  //   if (i < s.length() - 1 && s[i] == s[i + 1])
  //   {
  //     renzoku++;
  //     // cout << renzoku;
  //   }
  //   else if (s[i] != s[i + 1] && s[i] == s[i - 1])
  //   {
  //     renzoku++;
  //     unsigned int temp = ((unsigned int)(renzoku / 2.0));
  //     // cout << temp;
  //     out += temp;
  //     renzoku = 0;
  //   }
  //   // cout << endl;
  // }
  // cout << (long long)out * ((long long)k / 2) + outoption << endl;
}
