#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[200], b[200], result = 0;
    scanf("%d", &n);
    a[0] = 10000000;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &b[i]);
        a[i + 1] = b[i];
        a[i] = min(a[i], b[i]);
        result += a[i];
    }
    a[n - 1] = b[n - 2];
    result += a[n - 1];
    printf("%d\n", result);
}
