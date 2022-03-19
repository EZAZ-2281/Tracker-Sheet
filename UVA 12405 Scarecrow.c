#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m;
    for(m = 1; m <= t; m++)
    {
        int n;
        scanf("%d", &n);
        char a[101];
        int i, count = 0;
        scanf("%s", a);

        for(i = 0; i < n;)
        {
            if(a[i] == '.'){
                count++;
                i = i + 3;
            }
            else
                i++;
        }
        printf("Case %d: %d\n", m, count);
    }
    return 0;
}
