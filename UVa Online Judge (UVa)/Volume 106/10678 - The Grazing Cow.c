#include <stdio.h>
#include <math.h>

#define Pi 2*acos(0.0)

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        float D, L;
        scanf("%f %f", &D, &L);

        printf("%.3f\n", Pi*(L/2)*(sqrt( pow(L/2, 2) - pow(D/2, 2) )));
    }
    return 0;
}
