/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int t, i, N, x;  
    scanf("%d", &t); 
    for(x = 1; x <= t; x++)
    {
        scanf("%d", &N); 
        int num[N]; 
        for (i = 0; i < N; i++){
            scanf("%d", &num[i]); 
        }
        int max = num[0]; 
        for(i = 1; i < N; i++){
            if(num[i] > max){
                max = num[i]; 
            }
        }       
        printf("Case %d: %d\n", x, max); 
    }
    return 0; 
}
