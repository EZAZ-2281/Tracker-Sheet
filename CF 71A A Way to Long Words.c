/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i;
    for(i = 0; i < t; i++)
    {
        char a[101];
        scanf("%s", &a);
        int l = strlen(a);
        if(l > 10)
            printf("%c%d%c\n", a[0], l-2, a[l-1]);
        else
            printf("%s\n", a);
    }
    return 0;
}
