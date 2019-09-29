#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int j;
        scanf("%d", &j);
        sum += 1.0 / j;
    }
    printf("%f\n", 1 / sum);
    return 0;
}