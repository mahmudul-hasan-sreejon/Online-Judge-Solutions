#include<stdio.h>
int main()
{
    int tc, I;
    float C, d, F;

    scanf("%d", &tc);
    for(I=1 ; I<=tc ; I++)
    {
        scanf("%f %f", &C, &d);

        F = (1.8*C)+32;
        F = F+d;
        C = (F-32)/1.8;

        printf("Case %d: %0.2f\n", I, C);
    }
    return 0;
}
