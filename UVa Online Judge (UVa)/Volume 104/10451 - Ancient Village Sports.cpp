#include <cstdio>
#include <cmath>

const double PI = 2*acos(0.0);

int main()
{
    double n, A;

    int ncase = 0;
    while( scanf("%lf %lf", &n, &A)==2 && n>=3.0 )
    {
        double r1 = sqrt( (2*A/n)/(sin( 2*PI/n )) );
        double r2 = r1*(cos( (2*PI)/(2*n) ));

        double area1 = (PI*r1*r1)-A;
        double area2 = A-(PI*r2*r2);

        printf("Case %d: %.5lf %.5lf\n", ++ncase, area1, area2);
    }
    return 0;
}
