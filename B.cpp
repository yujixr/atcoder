#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[40], b[40], c[40], result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        result += b[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < n && a[i] + 1 == a[i + 1])
        {
            result += c[a[i] - 1];
        }
    }
    printf("%d\n", result);
}
