#include <cstdio>
#include <cmath>

const double PI = acos(-1), radius = 6440.0;

int main()
{
    double s, a;
    char type[5];

    while( scanf("%lf %lf %s", &s, &a, type)==3 )
    {
        if( type[0]=='m' ) a /= 60;

        if( a>180 ) a = 360-a;

        double angle = (a*PI)/180;
        double arc = 2.0*(s+radius)*sin( angle/2.0 );
        double chord = angle*(s+radius);

        printf("%.6lf %.6lf\n", chord, arc);
    }
    return 0;
}
