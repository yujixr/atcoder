#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;

int main()
{
    char s[100000], t[100000];
    int pre, cur = -1;
    mp::cpp_int ans = 0;
    scanf("%s", s);
    scanf("%s", t);
    const int slen = strlen(s);
    const int tlen = strlen(t);
    for (int i = 0; i < tlen; i++)
    {
        pre = cur;
        cur = -1;
        for (int j = 0; j < slen; j++)
        {
            if (s[j] == t[i])
            {
                if (cur == -1)
                {
                    cur = j;
                }
                if (j > pre)
                {
                    cur = j;
                    break;
                }
            }
        }
        if (cur == -1)
        {
            printf("-1\n");
            return 0;
        }
        if (cur > pre)
        {
            ans += cur - pre;
        }
        else
        {
            ans += slen + cur - pre;
        }
    }
    cout << ans << endl;
    return 0;
}