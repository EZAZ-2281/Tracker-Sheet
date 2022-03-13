#include <stdio.h>
#include <cmath>
double solve(int p, int q, int r, int s, int t, int u, double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{

    int p,q,r,s,t,u;
    double x;

    while (scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) == 6){

        double small = solve(p, q, r, s, t, u, 0);
        double big = solve(p, q, r, s, t, u, 1);

        if(small * big > 0){
            printf("No solution\n");
            continue;
        }

        double low = 0, high = 1;

        double mid, ans;
        int i;
        for(i = 0; i < 6; i++){

            mid = (low + high) / 2;

            ans = solve(p, q, r, s, t, u, mid);

            if(ans > 0) 
                low = mid;
            else 
                high = mid;
        }

        printf("%.4lf\n", mid);
    }

    return 0;
}
