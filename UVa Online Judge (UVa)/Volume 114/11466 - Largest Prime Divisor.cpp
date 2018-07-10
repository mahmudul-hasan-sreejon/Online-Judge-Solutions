#include <cstdio>
#include <cmath>

int main()
{
    long long N;

    while( scanf("%lld", &N)!=EOF && N )
    {
        if( N<0 ) N = -N;

        long long LPD = -1, div_counter = 0, temp = sqrt(N);
        for(long long i=2 ; i<=temp && N!=1 ; i++)
        {
            while( N%i==0 )
            {
                LPD = i;
                N /= i;
            }

            if( LPD==i ) div_counter++;
        }

        if( N!=1 && LPD!=-1 ) LPD = N;
        else if( div_counter==1 ) LPD = -1;

        printf("%lld\n", LPD);
    }
    return 0;
}
