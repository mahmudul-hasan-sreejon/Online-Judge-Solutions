#include <stdio.h>

int main()
{
    int B, N;
    int reserve[30];

    while( scanf ("%d %d", &B, &N) && B+N!=0 )
    {
        int i;
        for(i=1 ; i<=B ; i++)
            scanf("%d", &reserve[i]);

        for(i=0 ; i<N ; i++)
        {
            int D, C, V;
            scanf("%d %d %d", &D, &C, &V);
            reserve[D] -= V;
            reserve[C] += V;
        }

        int flag = 0;

        for(i=1 ; i<=B ; i++)
        {
            if( reserve[i]<0 )
            {
                flag = 1;
                break;
            }
        }

        if( flag )
            printf ("N\n");
        else
            printf ("S\n");
    }
    return 0;
}
