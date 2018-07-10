#include <stdio.h>
#include <math.h>

#define PI 2*acos(0.0)

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        double L;
        scanf("%lf", &L);

        double R = PI*(L/5.0)*(L/5.0);
        double G = (L*((L*6.0)/10.0))-R;

        printf("%.2lf %.2lf\n", R, G);
    }
    return 0;
}
