#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

#define N 40000
#define Check(N,pos) ((bool) ((N)&(1<<(pos))))
#define Set(N,pos) ((N)=((N)|(1<<(pos))))

unsigned status[(N>>5)+1];
vector < unsigned > primes;

void bitSieve()
{
    unsigned i, j, sqrtN = unsigned (sqrt(N));
    for(i=3 ; i<=sqrtN ; i+=2)
        if( !Check(status[i>>5], i&31) )
            for(j=i*i ; j<=N ; j+=(i<<1)) status[j>>5] = Set(status[j>>5], j&31);

    primes.push_back(2);
    for(i=3 ; i<=N ; i+=2)
        if( !Check(status[i>>5], i&31) ) primes.push_back(i);
}

int main()
{
    bitSieve();

    unsigned n;
    while( scanf("%u", &n)==1 && n )
    {
        unsigned pos = 0;
        for(unsigned i=1 ; i<=n ; i++) pos = (pos+primes[n-i])%i;

        printf("%u\n", pos+1);
    }
    return 0;
}