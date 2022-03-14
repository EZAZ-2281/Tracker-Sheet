#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    int i, even = 0, odd = 0, pos;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    for(i = 0; i < n; i++){
        if(even > odd){
            if(a[i] % 2 != 0){
                pos = i + 1;
            }
        }
        else{
            if(a[i] % 2 == 0){
                pos = i + 1;
            }
        }
    }
    printf("%d", pos);

    return 0;
}
