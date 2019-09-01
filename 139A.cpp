#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[12], T[12];
    int result = 0;
    scanf("%s", S);
    scanf("%s", T);

    for (int i = 0; i < 3; i++)
    {
        if (S[i] == T[i])
        {
            result++;
        }
    }
    printf("%d\n",result);
}