#include <stdio.h>
int main()
{
    int i,j,k;
    int l,d,c=0;
    char s[120];

    scanf("%s", s);
    l=strlen(s);

    d=abs(s[0]-97);
    if(d<=13)
        c+=d;
    else
        c+=(26-d);

    for(i=0; i<l-1; i++) {
        d=abs(s[i]-s[i+1]);

        if(d<=13)
            c+=d;
        else
            c+=(26-d);
    }

    printf("%d", c);

    return 0;
}
