#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        double R1, R2, R3;
        scanf("%lf %lf %lf", &R1, &R2, &R3);

        double a = R2+R3;
        double b = R1+R3;
        double c = R1+R2;

        double theta1 = acos( (b*b+c*c-a*a)/(2.0*b*c) );
        double theta2 = acos( (a*a+c*c-b*b)/(2.0*a*c) );
        double theta3 = acos( (a*a+b*b-c*c)/(2.0*a*b) );

        double arc1 = 0.5*theta1*R1*R1;
        double arc2 = 0.5*theta2*R2*R2;
        double arc3 = 0.5*theta3*R3*R3;

        double s = (a+b+c)/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));

        printf("%.6lf\n", area-arc1-arc2-arc3);
    }
    return 0;
}
