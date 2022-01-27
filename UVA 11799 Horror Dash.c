/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int t, i, N, x;  
    scanf("%d", &t); 
    for(x = 1; x <= t; x++)
    {
        scanf("%d", &N); 
        int max = -1, value; 
        for(i = 1; i <= N; i++)
        {
            scanf("%d", &value); 
            if(value > max)
            {
                max = value; 
            }
        }
        printf("Case %d: %d\n", x, max); 
    }
    return 0; 
}
