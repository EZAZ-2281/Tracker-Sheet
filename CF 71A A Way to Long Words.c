#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int j;
    for(j = 0; j < t; j++)
    {
        char a[1005];
        scanf("%s", &a);
        int len = strlen(a);
        int i;
        if(len > 10)
        {
            printf("%c", a[0]);
            printf("%d", len - 2);
            printf("%c", a[len-1]);
            printf("\n");
        }
        else
        {
            printf("%s\n", a);
        }
    }
    return 0;
}
