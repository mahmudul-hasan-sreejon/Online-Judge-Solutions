#include <stdio.h>
#include <math.h>

#define Pi 2*acos(0.0)

int main()
{
    double r, n;

    while( scanf("%lf %lf", &r, &n)==2 )
        printf("%.3lf\n", (n/2)*(r*r)*sin((2*Pi)/n));

    return 0;
}
