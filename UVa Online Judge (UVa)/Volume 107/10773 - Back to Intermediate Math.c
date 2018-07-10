#include <stdio.h>
#include <math.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        float d, v, u;
        scanf("%f %f %f", &d, &v, &u);

        float t1, t2;
        if( v<=0 || u<=0 || v>=u )
            printf("Case %d: can't determine\n", ++ncase);
        else
        {
            t1 = d/sqrt(u*u-v*v);
            t2 = d/u;
            printf("Case %d: %.3f\n", ++ncase, t1-t2);
        }
    }
    return 0;
}
