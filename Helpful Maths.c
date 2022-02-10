/* Bismillahir Rahmanir Raheem */

#include <stdio.h>
int main()
{
    char c[100];
    scanf("%s", c);
    int i, j, temp;
    int len = strlen(c);
    for(i = 0; i < len; i = i + 2){
        for(j = 0; j < len-1; j = j + 2){
            if(c[j] > c[j+2]){
                temp = c[j];
                c[j] = c[j+2];
                c[j+2] = temp;
            }
        }
    }
    printf("%s\n", c);
    return 0;
}
