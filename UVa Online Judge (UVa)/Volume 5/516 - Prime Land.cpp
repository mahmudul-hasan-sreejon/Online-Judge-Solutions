#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

#define N 32768
#define Check(N, pos) ((bool) ((N)&(1<<(pos))))
#define Set(N, pos) ((N)=((N)|(1<<(pos))))

unsigned status[(N>>5)+2], factor[N], power[N];
vector < unsigned > primes;

void bitSieve()
{
    unsigned sqrtN = unsigned (sqrt(N));
    for(unsigned i=3 ; i<=sqrtN ; i+=2)
        if( !Check(status[i>>5], i&31) )
            for(unsigned j=i*i ; j<=N ; j+=(i<<1)) Set(status[j>>5], j&31);

    primes.push_back(2);
    for(unsigned i=3 ; i<=N ; i+=2)
        if( !Check(status[i>>5], i&31) ) primes.push_back(i);
}

int main()
{
    bitSieve();

    string input;
    while( getline(cin, input) && input!="0" )
    {
        stringstream converter(input);

        unsigned base, exponent, x = 1;
        while( converter >> base >> exponent )
            for(unsigned i=1 ; i<=exponent ; i++) x *= base;
        x--;

        for(unsigned i=0 ; i<N ; i++) factor[i] = power[i] = 0;

        unsigned sz = primes.size(), len = 0;
        for(unsigned i=0 ; i<sz ; i++)
        {
            if( !(x%primes[i]) )
            {
                factor[len] = primes[i];
                while( !(x%primes[i]) )
                {
                    power[len]++;
                    x /= primes[i];
                }
                len++;
            }
            if( x==1 ) break;
        }

        for(unsigned i=len-1 ; i>0 ; i--)
            printf("%u %d ", factor[i], power[i]);
        printf("%u %d\n", factor[0], power[0]);
    }
    return 0;
}
