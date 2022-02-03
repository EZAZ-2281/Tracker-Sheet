/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int T, t; 
    scanf("%d", &T); 
    for(t = 0; t < T; t++)
    {
        int m, i; 
        scanf("%d", &m); 
        int a[m]; 
        for(i = 0; i < m; i++){
            scanf("%d", &a[i]); 
        }
        int max = -200000; 
        int difference = -200000;  
        for(i = 0; i < m-1; i++)
        {
            if(a[i] > max){
                max = a[i]; 
            }
            if(max - a[i+1] > difference){
                difference = max - a[i+1]; 
            }
        }
        printf("%d\n", difference); 
        /* printf("%d\n", max); */
    }
    return 0; 
}
