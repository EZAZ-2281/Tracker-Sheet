/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int x, t; 
    scanf("%d", &t);
    for(x = 0; x < t; x++)
    {
        int n, i; 
        scanf("%d", &n); 
        int num[n]; 
        for(i = 0; i < n; i++){
            scanf("%d", &num[i]); 
        }
        int max = num[0]; 
        int min = num[0]; 
        for(i = 1; i < n; i++){
            if(num[i] > max){
                max = num[i]; 
            }else if(num[i] < min){
                min = num[i]; 
            }
        }
        int value = (max - min) * 2; 
        printf("%d\n", value);
    } 
}
