/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int p = 0; p < t; p++)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        int temp = n, x;
        while(n != 0)
        {
            x = n % 10;
            sum = sum * 10 + x;
            n = n / 10;
        }
        if(sum == temp)
            printf("Case %d: Yes\n", p+1);
        else
            printf("Case %d: No\n", p+1);
    }
    return 0;
}
