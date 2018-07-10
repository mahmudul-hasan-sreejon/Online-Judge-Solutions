#include <stdio.h>
#include <math.h>

int main()
{
    long tc;

    scanf("%ld", &tc);
    while( tc-- )
    {
        long i, L[1000], len = 0;
        for(i=0 ;  ; i++)
        {
            scanf("%ld", &L[i]);
            if( L[i]==0 )
                break;
            len++;
        }

        long j, temp;
        for(i=1 ; i<=len-1 ; i++)
        {
            for(j=1 ; j<=len-i ; j++)
            {
                if( L[j-1]<=L[j] )
                {
                    temp = L[j-1];
                    L[j-1] = L[j];
                    L[j] = temp;
                }
            }
        }

        long power = 1, sum = 0;
        for(i=0 ; i<len ; i++)
        {
            sum += 2*pow(L[i], power);
            power++;
        }

        if( sum>5000000 )
            printf("Too expensive\n");
        else
            printf("%ld\n", sum);
    }
    return 0;
}
