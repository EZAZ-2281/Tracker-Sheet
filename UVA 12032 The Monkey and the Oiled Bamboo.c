#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    for(x = 1; x <= t; x++)
    {
        int n, k = 0, i;
        scanf("%d", &n);
        int a[100001];
        for(i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 1; i <= n; i++){
            if(a[i] - a[i-1] > k){
                k = a[i] - a[i-1];
            }
        }
        int count = k;
        for(i = 1; i <= n; i++){
            if(a[i] - a[i-1] == k)
                k--;
            else if(a[i] - a[i-1] > k){
                count++;
                break;
            }
        }
        printf("Case %d: %d\n", x, count);
    }
    return 0;
}
