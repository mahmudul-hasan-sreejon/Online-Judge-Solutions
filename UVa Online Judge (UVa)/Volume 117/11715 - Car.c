#include<stdio.h>
#include<math.h>
int main()
{
    int  tc=1, index;
    double u, v, t, a, s;

    while ( scanf("%d", &index) && index!=0 )
    {
        switch (index)
        {
        case 1:
            scanf("%lf %lf %lf", &u, &v, &t);
            a = (v-u)/t;
            s = u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n", tc, s, a);
            break;
        case 2:
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v-u)/a;
            s = u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n", tc, s, t);
            break;
        case 3:
            scanf("%lf %lf %lf", &u, &a, &s);
            t = (sqrt(u*u+2.0*a*s)-u)/a;
            v = u+a*t;
            printf("Case %d: %.3lf %.3lf\n", tc, v, t);
            break;
        case 4:
            scanf("%lf %lf %lf", &v, &a, &s);
            u = sqrt(v*v-2.0*a*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n", tc, u, t);
            break;
        }
        tc++;
    }
    return 0;
}
