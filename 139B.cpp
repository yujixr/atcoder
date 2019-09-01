#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, result = 0;
    scanf("%d", &A);
    scanf("%d", &B);

    A--;
    B--;
    printf("%d\n", (int)ceil((double)B / A));
}