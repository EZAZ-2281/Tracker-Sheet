
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[105], i, j, result = 0, temp;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0; i < n - 1; i = i + 2){
        result = result + (a[i+1] - a[i]);
    }
    printf("%d", result);

    return 0;
}
