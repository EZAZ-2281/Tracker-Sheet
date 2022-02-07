/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int n, i, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int j, temp;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    /*for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }*/

    int count = 0;
    int x = 0;
    int flag = -1;

    for(i = 1; i < n; i++)
    {
        if(a[i] - a[flag] > k && x <= flag){
            x = i;
        }
        if(a[i] - a[x] > k && x > flag){
            count++;
            flag = i - 1;
            i--;
        }
    }
    if(a[n-1] - a[flag] > k || flag == -1){
        count++;
        flag = n - 1;
    }
    printf("%d", count);

    return 0;
}
