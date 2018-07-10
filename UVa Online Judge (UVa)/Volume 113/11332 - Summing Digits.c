#include <stdio.h>

long sum_digit(long a)
{
    if( a>9 )
    {
        while( 1 )
        {
            long sum = 0;
            while( a>0 )
            {
                sum += a%10;
                a /= 10;
            }

            if( sum<10 )
                return sum;
            else
                a = sum;
        }
    }
    else
        return a;
}

int main()
{
    long num;

    while( scanf("%ld", &num)==1 && num!=0 )
        printf("%ld\n", sum_digit(num));

    return 0;
}
