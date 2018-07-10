#include <stdio.h>

long long nCr(long long n, long long r)
{
    if( n-r<r )
        r = n-r;

    long long i, result = 1;
    for(i=1 ; i<=r ; i++)
    {
        result *= n;
        result /= i;
        n--;
    }
    return result;
}

int main()
{
    long long N, M;

    while( scanf("%lld %lld", &N, &M)==2 && N+M!=0 )
        printf("%lld things taken %lld at a time is %lld exactly.\n", N, M, nCr(N, M));

    return 0;
}
