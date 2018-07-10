#include <cstdio>
#include <cmath>

int main()
{
    long tc;

    scanf("%ld", &tc);
    while( tc-- )
    {
        long L, U;
        scanf("%ld %ld", &L, &U);

        long ans, div_num = -1;
        for(long i=L ; i<=U ; i++)
        {
            long temp = sqrt(i), divisor = 0;
            for(long j=1 ; j<=temp ; j++)
            {
                if( i%j==0 )
                {
                    divisor++;
                    if( !(i/j==j) ) divisor++;
                }
            }

            if( div_num<divisor )
            {
                div_num = divisor;
                ans = i;
            }
        }

        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", L, U, ans, div_num);
    }
    return 0;
}