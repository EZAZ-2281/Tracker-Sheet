#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[105], i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int count = 0;

    for(i = 0; i < n; i++){
        if(a[i] == 1){
            count++;
        }
    }

    if(count == 0)
        printf("Easy\n");
    else
        printf("Hard\n");

    return 0;
}
