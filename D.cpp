#include <bits/stdc++.h>
using namespace std;

struct dat
{
    int len, begin;
};

int main()
{
    int n, k, r = 0;
    char s[1000000];

    vector<dat> tsk;

    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%s", &s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            int a = i;
            int len = 1;
            for (i += 1; i < n; i++)
            {
                if (s[i] == 'R')
                {
                    len++;
                }
            }
            tsk.push_back({len, a});
        }
    }
    sort(
        tsk.begin(),
        tsk.end(),
        [](const dat &x, const dat &y) { return x.len < y.len; });
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < tsk[i].len; j++)
        {
            s[tsk[i].begin + j] = 'L';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && s[i] == 'R' && s[i + 1] == 'R')
        {
            r++;
        }
        if (i > 0 && s[i] == 'L' && s[i - 1] == 'L')
        {
            r++;
        }
    }
    printf("%d\n", r);
}
