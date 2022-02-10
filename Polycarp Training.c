/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count = 1;
    for(i = 0; i < n; i++){
        if(a[i] > count){
            count++;
        }
        else if(a[i] == 1){
            continue;
        }
    }
    if(count == 1){
        printf("%d", count);
    } else{
        printf("%d", count);
    }
    //printf("%d\n", count-1);

    return 0;
}
