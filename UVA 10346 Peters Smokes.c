/* Bismillahir Rahmanir Raheem */

#include <stdio.h>
int main()
{
    int n, k, div, rem;
    while(scanf("%d %d", &n, &k) != EOF)
    {
        int count = n;
        while(n >= k)
        {
            div = n / k;
            count = count + div;
            rem = n % k;
            n = div + rem;
        }
        printf("%d\n", count);
    }

    return 0;
}

Or, 
#include <stdio.h>
int main()
{
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF)
    {
        int result = n + (n-1) / (k-1);
        printf("%d\n", result);
    }
    return 0;
}
