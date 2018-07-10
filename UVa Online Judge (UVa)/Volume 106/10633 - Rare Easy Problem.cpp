#include <cstdio>

int main()
{
    unsigned long long N_M;

    while( scanf("%llu", &N_M)==1 && N_M )
    {
        long long N = (N_M*10)/9;

        if( N_M%9==0 ) printf("%llu %llu\n", N-1, N);
        else printf("%llu\n", N);
    }
    return 0;
}
