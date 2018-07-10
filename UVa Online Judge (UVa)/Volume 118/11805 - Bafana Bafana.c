#include<stdio.h>
int main()
{
    long int tc, i, N, K, P, j;

    scanf("%ld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%ld %ld %ld", &N, &K, &P);

        for(j=1 ; j<=P ; j++)
        {
            if( K==N )
                K=1;
            else
                K++;
        }

        printf("Case %ld: %ld\n", i, K);
    }
    return 0;
}
