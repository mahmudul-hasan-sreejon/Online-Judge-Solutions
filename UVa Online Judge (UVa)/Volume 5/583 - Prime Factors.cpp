#include <cstdio>
#include <cmath>

int main()
{
    int g;

    while( scanf("%d", &g)==1 && g )
    {
        printf("%d = ", g);
        if( g<0 )
        {
            printf("-1 x ");
            g = -g;
        }

        for(int i=2 ; i<=sqrt(g) ; i++)
            while( g%i==0 )
            {
                printf("%d", i);
                g /= i;
                if( g>1 ) printf(" x ");
            }

        if( g>1 ) printf("%d", g);
        printf("\n");
    }
    return 0;
}
