/* Bismillahir Rahmanir Raheem */

#include <stdio.h>
int main()
{
    int a[10], i, j, temp;
    for(i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int x, y, z;
    x = a[3] - a[0];
    y = a[3] - a[1];
    z = a[3] - a[2];
    printf("%d %d %d\n", x, y, z);

    return 0;
}
