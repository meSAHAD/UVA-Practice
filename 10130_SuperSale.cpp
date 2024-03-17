#include <stdio.h>
#include <string.h>

#define mx 1005

int dp[mx][105], price[mx], wt[mx], a, tc, n, m;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int F(int i, int taken)
{
    if (i >= n)
        return 0;
    if (dp[i][taken] != -1)
        return dp[i][taken];
    int p = 0;
    if (taken + wt[i] <= a)
        p = max(F(i + 1, taken + wt[i]) + price[i], F(i + 1, taken));
    else
        p = F(i + 1, taken);
    return dp[i][taken] = p;
}

int main()
{
    scanf("%d", &tc);
    while (tc--)
    {
        int i;
        scanf("%d", &n);
        for ( i = 0; i < n; i++)
            scanf("%d %d", &price[i], &wt[i]);
        scanf("%d", &m);
        int p = 0;
        for ( i = 0; i < m; i++)
        {
            scanf("%d", &a);
            memset(dp, -1, sizeof(dp));
            p += F(0, 0);
        }
        printf("%d\n", p);
    }
    return 0;
}
