#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, H[100000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &H[i]);
    }
    int cur = 0, max = 0;
    for (int i = 0; i < N-1; i++)
    {
        if (H[i] >= H[i + 1])
        {
            cur++;
            if (cur > max)
            {
                max = cur;
            }
        }
        else
        {
            cur = 0;
        }
    }
    printf("%d\n",max);
}