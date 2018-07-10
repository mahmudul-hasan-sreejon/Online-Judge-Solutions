#include <stdio.h>

long long fact(long long n)
{
    long long i, sum = 1;

    for(i=2 ; i<=n ; i++)
    {
        sum *= i;
        while( sum%10==0 )
            sum /= 10;

        sum %= 100000;
    }
    return (sum%10);
}

int main()
{
    long long N;

    while( scanf("%lld", &N)==1 )
        printf("%5lld -> %lld\n", N, fact(N));

    return 0;
}
