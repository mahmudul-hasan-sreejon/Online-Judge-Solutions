#include <stdio.h>

int main()
{
    int N;

    printf("PERFECTION OUTPUT\n");
    while( scanf("%d", &N)==1 && N!=0 )
    {
        int i, sum = 0;
        for(i=1 ; i<N ; i++)
            if( N%i==0 )
                sum += i;

        if( sum==N )
            printf("%5d  PERFECT\n", N);
        else if( sum<N )
            printf("%5d  DEFICIENT\n", N);
        else
            printf("%5d  ABUNDANT\n", N);
    }
    printf("END OF OUTPUT\n");

    return 0;
}
