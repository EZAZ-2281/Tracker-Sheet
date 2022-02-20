/* Bismillahir Rahmanir Raheem */

#include <stdio.h>
int main()
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    if(n > m){
        printf("%d\n", n - m);
        return 0;
    }
    while(n < m)
    {
        if(m % 2 == 0){
            m = m / 2;
            count++;
        }
        else{
            m++;
            count++;
        }
    }
    printf("%d\n", (count+n-m));

    return 0;
}
