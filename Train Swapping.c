/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{

    int x, t;
    scanf("%d", &t);
    for(x = 0; x < t; x++)
    {
        int n, i, k;
        scanf("%d", &n);
        int a[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int j, temp, count = 0;
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
    return 0; 
}
