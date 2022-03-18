#include <stdio.h>
int main()
{
    char a[101];
    scanf("%s", a);
    int n = strlen(a);
    int i, j, temp;
    for(i = 0; i < n; i = i + 2){
        for(j = i + 2; j < n; j = j + 2){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++){
        if(a[i] == '+'){
            printf("+");
        }
        else{
            printf("%c", a[i]);
        }
    }
    return 0;
}
