#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

#define N 10002
#define Check(N,pos) ((bool) ((N)&(1<<(pos))))
#define Set(N,pos) ((N)=((N)|(1<<(pos))))

unsigned status[(N>>5)+1], counter[N];
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

void primeConsecutiveSum()
{
    for(unsigned i=0 ; i<N ; i++) counter[i] = 0;
    unsigned len = primes.size();
    for(unsigned i=0 ; i<len ; i++)
    {
        unsigned sum = 0;
        for(unsigned j=i ; j<len ; j++)
        {
            sum += primes[j];
            if( sum>(N-2) ) break;
            counter[sum]++;
        }
    }
}

int main()
{
    bitSieve();
    primeConsecutiveSum();

    unsigned n;
    while( scanf("%u", &n)==1 && n )
        printf("%u\n", counter[n]);

    return 0;
}