#include <stdio.h>
int main()
{
    int a[4], i;
    for(i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }
    int j, temp;
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 4; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int res1 = a[3] - a[0];
    int res2 = a[3] - a[1];
    int res3 = a[3] - a[2];
    printf("%d %d %d", res1, res2, res3);
    return 0;
}
