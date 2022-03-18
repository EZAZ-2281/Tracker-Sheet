#include <stdio.h>
int main()
{
    int n; 
    scanf("%d", &n); 
    char a1[n]; 
    char a2[n]; 
    scanf("%s", &a1); 
    scanf("%s", &a2); 
    int count = 0, i; 
    
    for(i = 0; i < n; i++){
        int sub = a1[i] - a2[i]; 
        if(sub < 0)
            sub = -sub; 
        if(sub > 5)
            sub = 10 - sub; 
            
        count = count + sub; 
    }
    
    printf("%d\n", count); 
    
    return 0; 
}
