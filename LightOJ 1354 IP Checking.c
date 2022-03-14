#include <stdio.h>
int deci(n){
    int rem, dec = 0, i = 0;
    while(n != 0)
    {
        rem = n % 10;
        n = n / 10;
        dec = dec + rem * pow(2, i);
        ++i;
    }
    return dec;
}
int main()
{

    int t;
    scanf("%d", &t);
    int j;
    for(j = 1; j <= t; j++)
    {
        int d1, d2, d3, d4;
        int b1, b2, b3, b4;
        scanf("%d.%d.%d.%d", &d1, &d2, &d3, &d4);
        scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);

        if(d1 == deci(b1) && d2 == deci(b2) && d3 == deci(b3) && d4 == deci(b4)){
            printf("Case %d: Yes\n", j);
        }
        else{
            printf("Case %d: No\n", j);
        }
    }

    return 0;
}
