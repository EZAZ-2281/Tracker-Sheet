/* Bismillahir Rahmanir Raheem */

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long int a[2000005],i,n;
    while (scanf("%ld",&n)!=EOF && n != 0)
    {
        for (i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0; 
}


/*
->This C source code show the exactly same output but the problem is it show runtime error. 

#include<stdio.h>
long long a[2000005],i,n, j, temp;

int main()
{
    while (scanf("%lld",&n)!=EOF)
    {
        if (n==0)
        {
            break;
        }
        for (i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for (i=0; i<n; i++)
        {
            printf("%lld", a[i]);
            if(i<(n-1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
