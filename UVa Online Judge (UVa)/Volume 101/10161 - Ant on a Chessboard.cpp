#include <cstdio>
#include <cmath>

int main()
{
    long long N;

    while( scanf("%lld", &N)!=EOF && N )
    {
        long long x = ceil(sqrt(N)), y = ceil(sqrt(N));

        long long dis = N-((x*x)-x+1);
        if( x%2==0 ) dis = -dis;

        if( dis>0 ) x -= dis;
        if( dis<0 ) y += dis;

        printf("%lld %lld\n", x, y);
    }
    return 0;
}
