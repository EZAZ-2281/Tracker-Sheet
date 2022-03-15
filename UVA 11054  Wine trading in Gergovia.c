#include <stdio.h>
int main()
{
    int n, i;
    long long int a, sum = 0, result = 0;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        for(i = 0; i < n; i++){
            scanf("%lld", &a);
            sum = sum + a;
            if(sum >= 0){
                result = result + sum;
            }
            else{
                result = result - sum;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}
