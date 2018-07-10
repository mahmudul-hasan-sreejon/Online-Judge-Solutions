#include <stdio.h>
#include <math.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        float x, y, r;
        scanf("%f %f %f", &x, &y, &r);

        float dis = sqrt( pow(x, 2) + pow(y, 2) );

        printf("%.2f %.2f\n", r-dis, r+dis);
    }
    return 0;
}
