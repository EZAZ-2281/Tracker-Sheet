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

/*
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int j;
    for(j = 0; j < t; j++)
    {
        int n;
        scanf("%d", &n);
        int a[100005], i;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int k = a[1] - a[0];
        int sol = k;
        for(i = 0; i < n-1; i++)
        {
            if(a[i+1] - a[i] == k)
                k--;
            else if(a[i+1] - a[i] > k)
                break;
        }
        printf("Case %d: %d\n", j+1, sol);
    }

    return 0;
}
*/
