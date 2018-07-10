#include <stdio.h>

int main()
{
    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        int N;
        scanf("%d", &N);

        int i, wall[N];
        for(i=0 ; i<N ; i++)
            scanf("%d", &wall[i]);

        int high_jumps = 0, low_jumps = 0;
        for(i=1 ; i<=N-1 ; i++)
        {
            if( wall[i-1]>wall[i] )
                low_jumps++;
            if( wall[i-1]<wall[i] )
                high_jumps++;
        }

        printf("Case %d: %d %d\n", ++ncase, high_jumps, low_jumps);
    }
    return 0;
}
