/* Bismillahir Rahmanir Raheem */

#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d", &n);
    char s[200];
    scanf("%s", &s);
    for(int i=0; i<n; i++){
        if(s[i] == '8'){
            count++;
        }
    }
    if(count >= n/11){
        printf("%d\n", n/11);
    }
    else if(count < n/11 && n > 11){
        printf("%d\n", count);
    }
    else{
        printf("0");
    }

    return 0;
}
