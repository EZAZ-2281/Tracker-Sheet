/* Bismillahir Rahmanir Raheem */

#include <stdio.h>

int main()
{
    int t, n, p;
    scanf("%d", &t);
    for(p = 0; p < t; p++)
    {
        scanf("%d", &n);
        int a[100001], i;
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int key = 0, ans;
        for(i = 0; i < n; i++) {
            if(a[i+1]-a[i] > key)
                key = a[i+1]-a[i];
        }
        ans = key;
        for(i = 0; i < n; i++) {
            if(a[i+1]-a[i] == key)
                key--;
            else if(a[i+1]-a[i] > key) {
                ans++;
                break;
            }
        }
        printf("Case %d: %d\n", p+1, ans);
    }
    return 0;
}
