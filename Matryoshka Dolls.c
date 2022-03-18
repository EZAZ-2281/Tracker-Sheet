#include <stdio.h>
int main()
{
    int s, x;
    scanf("%d %d", &s, &x);
    int i = 1, count = 0;
    while(s != 0)
    {
        s = s / x;
        count++;
    }
    printf("%d\n", count);

    return 0;
}
