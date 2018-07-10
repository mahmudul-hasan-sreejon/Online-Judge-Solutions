#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

#define MAX 46341
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
    if( num<MAX )
    {
        if( !Check(status[num>>5], num&31) ) return true;
        else return false;
    }
    unsigned sqrtNUM = unsigned (sqrt(num)), SZ = primes.size();
    for(unsigned i=0 ; i<SZ && primes[i]<=sqrtNUM ; i++)
        if( !(num%primes[i]) ) return false;
    return true;
}

int main()
{
    bitSieve();

    unsigned L, U;
    while( scanf("%u %u", &L, &U)!=EOF )
    {
        unsigned temp;
        if( L<=2 ) temp = 2, L = 3;
        else
        {
            if( !(L&1) ) L++;
            while( (L<U) && !isPrime(L) ) L += 2;
            temp = L;
            L += 2;
        }

        unsigned C1 = 0, C2 = 0, D1 = 0, D2 = 0, minimum = (2<<30)-1, maximum = 0;
        for(unsigned i=L ; i<=U ; i+=2)
            if( isPrime(i) )
            {
                if( i-temp<minimum )
                {
                    minimum = i-temp;
                    C1 = temp;
                    C2 = i;
                }
                if( i-temp>maximum )
                {
                    maximum = i-temp;
                    D1 = temp;
                    D2 = i;
                }
                temp = i;
            }

        if( !(C1 && C2 && D1 && D2) ) printf("There are no adjacent primes.\n");
        else printf("%u,%u are closest, %u,%u are most distant.\n", C1, C2, D1, D2);
    }
    return 0;
}
