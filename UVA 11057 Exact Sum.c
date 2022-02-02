/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int money, x, y;
    scanf("%d", &money);
    int max = 1000001, j;
    for(i = 0; i < n; i++)
    {
        for(j = 1; j < n; j++)
        {
            int d = abs(a[i]-a[j]);
            if(a[i] + a[j] == money && abs(a[i]-a[j]) < max)
            {
                x = a[i];
                y = a[j];
                max = d;
            }
        }
    }
    printf("Peter should buy books whose prices are %d %d\n\n", x, y);

    return 0;
}
