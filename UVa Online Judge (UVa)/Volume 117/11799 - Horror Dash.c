#include <stdio.h>

int main()
{
    int tc, ncase, c;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int N, i, c, max;

        scanf("%d", &N);
        max = 0;
        for(i=1 ; i<=N ; i++)
        {
            scanf("%d", &c);
            if( c>max )
                max = c;
        }

        printf("Case %d: %d\n", ++ncase, max);
    }
    return 0;
}
