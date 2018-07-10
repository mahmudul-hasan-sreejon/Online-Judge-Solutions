#include <stdio.h>
#include <math.h>

int main()
{

    int tc, ncase;

    scanf("%d", &tc);
    ncase = 0;
    while( tc-- )
    {
        long N;
        scanf("%ld", &N);

        long temp = N;
        while( temp>9 )
        {
            long sum = 0;
            while( temp!=0 )
            {
                sum += (temp%10)*(temp%10);
                temp /= 10;
            }
            temp = sum;
        }

        if( temp==1 || N==7 ) printf("Case #%d: %ld is a Happy number.\n", ++ncase, N);
        else printf("Case #%d: %ld is an Unhappy number.\n", ++ncase, N);
    }
    return 0;
}
