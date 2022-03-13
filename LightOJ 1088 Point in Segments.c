#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int p;
    for(p = 0; p < t; p++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m], i, j;
        for(i = 0; i < m; i++){
            scanf("%d", &a[i]);
        }
        int k, x, y, c = 0;
        printf("Case %d:\n", p+1);
        for(k = 0; k < n; k++){
            scanf("%d %d", &x, &y);
            for(i = 0; i < m; i++){
                for(j = x; j <= y; j++){
                    if(a[i] == j){
                        c++;
                    }
                }
            }
            printf("%d\n", c);
            c = 0;
        }
    }

    return 0;
}

/*
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int p;
    for(p = 0; p < t; p++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m], i, j;
        for(i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
        }
        int k, x, y, c = 0;
        printf("Case %d:\n", p+1);
        for(k = 0; k < n; k++)
        {
            scanf("%d %d", &x, &y);
            for(i = 0; i < m; i++)
            {
                if(y > a[m-1])
                {
                    for(j = x; j <= a[m-1]; j++)
                    {
                        if(a[i] == j)
                        {
                            c++;
                        }
                    }
                }
                else
                {
                    for(j = x; j <= y; j++)
                    {
                        if(a[i] == j)
                        {
                            c++;
                        }
                    }
                }

            }
            printf("%d\n", c);
            c = 0;
        }
    }

    return 0;
}
*/
