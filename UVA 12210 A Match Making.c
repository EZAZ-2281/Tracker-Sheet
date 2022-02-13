/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int n,m;
    int c = 1, i; 
    while ((scanf("%d %d",&n,&m)!=EOF) && n != 0 && m != 0)
    {
        int b[10005];
        int g[10005];
        int smallBoy = 100;
        for(i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
            if (smallBoy > b[i])
            {
                smallBoy = b[i];
            }
        }
        for(i=0; i<m; i++)
        {
            scanf("%d",&g[i]);
        }
        if (n-m <= 0)
            printf("Case %d: 0\n", c);
        else
            printf("Case %d: %d %d\n",c, n-m, smallBoy);
        c++;
    }
    return 0;
}
