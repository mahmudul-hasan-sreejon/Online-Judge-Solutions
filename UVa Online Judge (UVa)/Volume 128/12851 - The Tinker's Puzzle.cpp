#include <cstdio>
#include <cmath>

#define PI (acos(-1))

int main()
{
    int tc, nCase = 1;

    scanf("%d", &tc);
    while( tc-- )
    {
        double D, V;
        scanf("%lf %lf", &D, &V);

        V *= 282.0;
        double A = 8.0*PI*D;
        A /= 3.0;
        double B = PI*D;
        B /= 3.0;
        A -= B;
        A = V/A;
        double R = sqrt(A);
        R *= 4.0;

        printf("Case %d: %.3lf\n", nCase, R);
        nCase++;
    }
    return 0;
}
