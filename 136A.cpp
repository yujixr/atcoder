#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, result;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    result = c - a + b;
    if (result < 0)
        result = 0;
    printf("%d", result);
}