#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, sum1 = 0, sum2 = 0, sum3 = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum1 = sum1 + a[i];
    }
    for(i = 0; i < n -1; i++)
    {
        scanf("%d", &a[i]);
        sum2 = sum2 + a[i];
    }
    for(i = 0; i < n - 2; i++)
    {
        scanf("%d", &a[i]);
        sum3 = sum3 + a[i];
    }
    int res1 = sum1 - sum2;
    int res2 = sum2 - sum3;
    printf("%d\n%d\n", res1, res2);
    return 0;
}
