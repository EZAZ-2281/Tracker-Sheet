#include <stdio.h>
int main()
{
    int n, m;
    int count = 0;
    scanf("%d %d", &n, &m);
    if(n > m){
        printf("%d\n", n - m);
        return 0;
    }
    else{
        while(n < m)
        {
            if(m % 2 == 0){
                m = m / 2; count++;
            }
            else{
                m++;
                count++; 
            }
        }
        count = count + (n-m);
    }
    printf("%d", count);
    return 0;
}
