#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, a[200000], b[200000], p[200000], x[200000], route[200000], result[200000];
    scanf("%d", &n);
    scanf("%d", &q);
    route[0] = 0;
    result[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
        route[b[i] - 1] = a[i];
        result[i] = 0;
    }
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &p[i]);
        scanf("%d", &x[i]);
        result[p[i] - 1] += x[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (route[i])
        {
            result[i] += result[route[i] - 1];
        }
        printf("%d\n", result[i]);
    }
    return 0;
}