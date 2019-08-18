#include <bits/stdc++.h>
using namespace std;

int asc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n, v[100];
    float result;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    qsort(v, n, sizeof(int), asc);
    result = (float)v[0];
    for (int i = 1; i < n; i++)
    {
        result = (result+v[i])/2.0;
    }
    printf("%f\n",result);
    return 0;
}