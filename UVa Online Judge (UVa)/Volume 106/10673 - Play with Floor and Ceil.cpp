#include <cstdio>
#include <cmath>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        long long x, k;
        scanf("%lld %lld", &x, &k);

        long long a = floor((double) x/k);
        long long b = ceil((double) x/k);

        long long p, q;
        for(p=0 ; p*a<=x ; p++)
            if( (x-p*a)%b==0 )
            {
                q = (x-p*a)/b;
                break;
            }

        printf("%lld %lld\n", p, q);
    }
    return 0;
}
