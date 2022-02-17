/* Bismillahir Rahmanir Raheem */

#include <stdio.h>
int main()
{
    int s, x, count = 0;
    scanf("%d %d", &s, &x);
    while(s != 0){
        s = s / x;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
