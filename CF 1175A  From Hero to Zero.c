#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i = 0; i< t; i++)
    {
        long long n;
        long long k;
        long long ans = 0;
        scanf("%lld %lld",&n,&k);
        while(n)
        {
            if(n % k)
                ans += n%k, n = n/k*k;
            else{
                ans++;
                n /= k;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
