/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int p = 0; p < t; p++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int p1 = y * 4 + 19;
        int p2 = (2*x-y) * 4 + 19;
        if(x <= y){
            printf("Case %d: %d\n",p+1, p1);
        }
        else{
            printf("Case %d: %d\n", p+1, p2);
        }
    }
    return 0;
}
