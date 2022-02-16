/* Bismillahir Rahmanir Raheem */

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
