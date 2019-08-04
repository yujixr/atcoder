#include <bits/stdc++.h>
using namespace std;

int n, h[100000], cur;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    n;
    cur = h[n - 1];
    for (int i = n - 2; i > -1; i--)
    {
        if (h[i] > cur)
        {
            if (h[i] - cur > 1)
            {
                printf("No");
                return 0;
            }
            cur = h[i] - 1;
        }
        else
        {
            cur = h[i];
        }
    }
    printf("Yes");
}