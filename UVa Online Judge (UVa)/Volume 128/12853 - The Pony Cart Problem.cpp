#include <cstdio>
#include <cmath>

#define PI (acos(-1))

int main()
{
    int tc, nCase = 1;

    scanf("%d", &tc);
    while( tc-- )
    {
        double D, N;
        scanf("%lf %lf", &D, &N);

        double A = D/(N-1);
        double C = 2.0*PI*(A+D);

        printf("Case %d: %.3lf\n", nCase, C);
        nCase++;
    }
    return 0;
}
