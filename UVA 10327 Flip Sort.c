/* Bismillahir Rahmanir Raheem */

#include <stdio.h>

int main()
{
    int i, n, a[1005], j, temp; 

    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int count = 0; 
        for(i = 1; i < n; i++)
        {
            for(j = 0; j < n - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }

    return 0;
}
