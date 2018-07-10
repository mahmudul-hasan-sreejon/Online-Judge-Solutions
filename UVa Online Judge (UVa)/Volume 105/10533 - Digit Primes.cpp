#include <cstdio>
#include <cmath>

unsigned n = 1000005, digitPrimes[1000005];
bool primes[1000005];

void sieve_atkins()
{
    primes[2] = primes[3] = true;
    for(unsigned i=5 ; i<n ; i++) primes[i] = false;

    unsigned lim = ceil(sqrt(n));
    for(unsigned x=1 ; x<=lim ; x++)
        for(unsigned y=1 ; y<=lim ; y++)
        {
            unsigned num = (4*x*x + y*y);
            if( num<=n && (num%12==1 || num%12==5) ) primes[num] = true;
            num = (3*x*x + y*y);
            if( num<=n && (num%12==7) ) primes[num] = true;
            if( x>y )
            {
                num = (3*x*x - y*y);
                if( num<=n && (num%12==11) ) primes[num] = true;
            }
        }

    for(unsigned i=5 ; i<=lim ; i++)
        if( primes[i] )
            for(unsigned j=i*i ; j<=n ; j+=i) primes[j] = false;
}

unsigned digitSum(unsigned num)
{
    unsigned sum = 0;
    while( num )
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

void digitPrimeGen()
{
    digitPrimes[0] = 0;
    for(unsigned i=1 ; i<n ; i++)
    {
        digitPrimes[i] = digitPrimes[i-1];
        if( primes[i] && primes[digitSum(i)] ) digitPrimes[i]++;
    }
}

int main()
{
    sieve_atkins();
    digitPrimeGen();

    unsigned tc, t1, t2;
    scanf("%u", &tc);
    while( tc-- )
    {
        scanf("%u %u", &t1, &t2);

        printf("%u\n", digitPrimes[t2]-digitPrimes[t1-1]);
    }
    return 0;
}