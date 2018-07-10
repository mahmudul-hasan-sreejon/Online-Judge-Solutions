#include <cstdio>
 
long long tc, nCase, n, m, sum;
 
int main()
{
    scanf("%lld", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%lld %lld", &n, &m);
 
        sum = (n*m)>>1;
 
        printf("Case %lld: %lld\n", nCase, sum);
        nCase++;
    }
    return 0;
}