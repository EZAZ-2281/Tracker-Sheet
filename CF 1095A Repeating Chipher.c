#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
    int j = 1, i;

    for(i = 0; i < n; i = i + j){
        printf("%c", a[i]);
        j++;
    }

    return 0;
}
