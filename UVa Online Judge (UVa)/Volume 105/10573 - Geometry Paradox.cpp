#include <cstdio>
#include <cmath>

const double PI = 2*acos(0);

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        double r1, r2;
        scanf("%lf", &r1);

        if( getchar()=='\n' )
        {
            double t = r1/4.0;
            double area = ((t*2.0)*(t*2.0)*PI)-(2.0*(t*t)*PI);
            printf("%.4lf\n", area);
        }
        else
        {
            scanf("%lf", &r2);

            double area = ((r1+r2)*(r1+r2)*PI)-(r1*r1*PI)-(r2*r2*PI);
            printf("%.4lf\n", area);
        }
    }
    return 0;
}
