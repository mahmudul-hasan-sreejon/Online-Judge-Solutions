#include <stdio.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        double R;
        scanf("%lf", &R);

        printf("Case %d:\n", ++ncase);
        printf("%.0lf %.0lf\n", -2.25*R, 1.5*R);
        printf("%.0lf %.0lf\n", 2.75*R, 1.5*R);
        printf("%.0lf %.0lf\n", 2.75*R, -1.5*R);
        printf("%.0lf %.0lf\n", -2.25*R, -1.5*R);
    }
    return 0;
}
