#include <stdio.h>
int main()
{
    int n, d, r;
    int m[100], e[100];
    while(scanf("%d %d %d", &n, &d, &r))
    {
        if(n == 0 && d == 0 && r == 0) break;
        int count = 0, sub, sum, i, j, temp;
        for(i = 0; i < n; i++){
            scanf("%d", &m[i]);
        }
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(m[i] > m[j]){
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        for(i = 0; i < n; i++){
            scanf("%d", &e[i]);
        }
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(e[i] < e[j]){
                    temp = e[j];
                    e[j] = e[i];
                    e[i] = temp;
                }
            }
        }
        for(i = 0; i < n; i++){
            sum = m[i] + e[i];
            if(sum > d){
                sub = sum - d;
                count = count + sub * r;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
