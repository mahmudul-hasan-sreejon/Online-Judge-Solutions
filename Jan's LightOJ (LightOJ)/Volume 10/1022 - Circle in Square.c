#include <stdio.h>
#include <math.h>
int main()
{
    int tc, i;
    double r, result;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lf", &r);

        result = (4*r*r - (2*acos(0.0)*r*r));

        printf("Case %d: %.2f\n", i, result+10e-9);
    }
    return 0;
}
