/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int Q;
    scanf("%d", &Q);
    int b[Q];
    for(int i = 0; i < Q; i++)
    {
        scanf("%d", &b[i]);
    }

    int i, j, m, x, y;
    for(i = 0; i < Q; i++)
    {
        x = -1;
        y = -1;
        for(j = 0; j < N; j++)
        {

            if(a[j] > b[i])
            {
                x = a[j];
                break;
            }
            if(a[j] < b[i])
            {
                y = a[j];
            }

        }
        if(y==-1) printf("X ");
        else printf("%d ", y);

        if(x == -1) printf("X\n");
        else printf("%d\n", x);

    }
    return 0;
}
