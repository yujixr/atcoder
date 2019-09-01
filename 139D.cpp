#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, result, a;
    scanf("%d", &N);
    vector<bool> used(N, false);
    a = N - (ceil(N / 2.0) - 1);
    used[a - 1] = true;
    result = N - a;
    for (int i = N - 1; i > 0; i--)
    {
        if (used[i])
        {
            a = i - (ceil(i / 2.0) - 1);
            used[a - 1] = true;
            if (a > 1)
            {
                result += i - a;
            }
            else
            {
                a = N * 2;
                result += i;
            }
        }
        else
        {
            used[i] = true;
            result += i;
        }
    }
    printf("%d\n", result);
}