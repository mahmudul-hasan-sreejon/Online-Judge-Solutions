#include <cstdio>
#include <cmath>

const double PI = acos(-1);

int main()
{
    double F;

    while( scanf("%lf", &F)==1 )
    {
        double convex = sin( 72*PI/180 ) / sin( 63*PI/180 );
        printf("%.10lf\n", F*convex);
    }
    return 0;
}
