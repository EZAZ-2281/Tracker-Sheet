/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int a, b, t, i, j, count = 0; 
    scanf("%d", &t); 
    int x[t], y[t]; 
    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b); 
        x[i] = a; 
        y[i] = b; 
    }
    for(i = 0; i < t; i++)
    {
        for(j = 0; j < t; j++)
        {
            if(i != j && x[i] == y[j]){
                count++; 
            }
        }
    }
    printf("%d\n", count); 
    return 0; 
}
