#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

#define MAX 10000
#define Check(N, pos) ((bool) ((N)&(1<<(pos))))
#define Set(N, pos) ((N)=((N)|(1<<(pos))))

vector < unsigned > primes;
unsigned status[(MAX>>5)+1];

void bitSieve()
{
    unsigned sqrtMAX = unsigned (sqrt(MAX));
    for(unsigned i=3 ; i<=sqrtMAX ; i+=2)
        if( !Check(status[i>>5], i&31) )
            for(unsigned j=i*i ; j<=MAX ; j+=(i<<1)) Set(status[j>>5], j&31);

    primes.push_back(2);
    for(unsigned i=3 ; i<=MAX ; i+=2)
        if( !Check(status[i>>5], i&31) ) primes.push_back(i);
}

bool isPrime(unsigned num)
{
    unsigned sqrtNUM = unsigned (sqrt(num)), SZ = primes.size();
    for(unsigned i=0 ; i<SZ && primes[i]<=sqrtNUM ; i++)
        if( !(num%primes[i]) ) return false;
    return true;
}

int main()
{
    bitSieve();

    unsigned n;
    while( scanf("%u", &n)!=EOF )
    {
        if( n<=4 )
        {
            printf("%u is not the sum of two primes!\n", n);
            continue;
        }
        if( (n&1) )
        {
            if( isPrime(n-2) ) printf("%u is the sum of 2 and %u.\n", n, n-2);
            else printf("%u is not the sum of two primes!\n", n);
        }
        else
        {
            unsigned p1 = 0, p2 = 0, temp = (n>>1);
            for(unsigned i=temp ; i<n ; i++)
            {
                if( isPrime(i) && isPrime(n-i) )
                {
                    p1 = n-i;
                    p2 = i;
                    if( p1!=p2 ) break;
                }
            }
            if( p1==p2 || p1==1 ) printf("%u is not the sum of two primes!\n", n);
            else printf("%u is the sum of %u and %u.\n", n, p1, p2);
        }
    }
    return 0;
}
