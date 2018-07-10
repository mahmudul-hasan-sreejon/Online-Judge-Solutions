#include <cstdio>
#include <cmath>

int tc, n;

bool isPrime(int x)
{
    if( x==2 ) return (true);
    else if( !(x&1) ) return (false);
    else
    {
        int sqrtX = sqrt(x);
        for(int i=3 ; i<=sqrtX ; i+=2)
            if( !(x%i) ) return (false);
    }
    return (true);
}

int sumOfDigits(int x)
{
    int sum = 0;
    while( x )
    {
        sum += x%10;
        x /= 10;
    }
    return (sum);
}

int sumOfPrimeFactors(int x)
{
    int sum = 0;
    while( !(x&1) )
    {
        sum += 2;
        x /= 2;
    }
    int i = 3, sqrtX = sqrt(x);
    while( i<=sqrtX )
        if( !(x%i) )
        {
            sum += sumOfDigits(i);
            x /= i;
        }
        else i+=2;
    if( x>1 ) sum += sumOfDigits(x);
    return (sum);
}

bool smithNumber(int x)
{
    if( !isPrime(x) )
    {
        int sum1 = sumOfDigits(x), sum2 = sumOfPrimeFactors(x);
        if( sum1==sum2 ) return (true);
        else return (false);
    }
    return (false);
}

int main()
{
    scanf("%d", &tc);
    while( tc-- )
    {
        scanf("%d", &n);

        while( !smithNumber(++n) ) ;

        printf("%d\n", n);
    }
    return 0;
}
