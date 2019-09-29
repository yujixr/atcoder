#include <bits/stdc++.h>
using namespace std;

char s[100000];
int c[100000];
int n;

int main()
{
    scanf("%s", &s);
    n = strlen(s);
    for (int i = 0; i < n; i++)
        c[i] = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'R' && s[i] == 'L')
        {
            for (int j = i - 1; j > -1; j--)
            {
                if (s[j] == 'L')
                    break;
                if ((i - 1 - j) % 2)
                {
                    c[i - 1]++;
                }
                else
                {
                    c[i]++;
                }
            }
            for (int j = i; j < n; j++)
            {
                if (s[j] == 'R')
                    break;
                if ((j - i + 1) % 2)
                {
                    c[i]++;
                }
                else
                {
                    c[i - 1]++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
}