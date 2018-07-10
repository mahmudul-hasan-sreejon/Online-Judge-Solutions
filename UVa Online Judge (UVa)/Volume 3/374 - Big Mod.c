#include <stdio.h>

long long bigmod(long long b, long long p, long long m)
{
    if( p==0 )
        return 1;
    else if( p%2==0 )
        return ((bigmod(b, p/2, m)%m)*(bigmod(b, p/2, m)%m))%m;
    else
        return ((b%m)*bigmod(b, p-1, m))%m;
}

int main()
{
    long long B, P, M;

    while( scanf("%lld %lld %lld", &B, &P, &M)==3 )
        printf("%lld\n", bigmod(B, P, M));

    return 0;
}
