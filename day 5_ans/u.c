#include <stdio.h>
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        int count[50] = {0};
        for (int i = 0; i < n; i++)
        {
            int k;
            scanf("%d", &k);
            count[k]++;
        }
        for (int i = 0; i < 41; i++)
        {
            if (count[i] == 1)

                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}