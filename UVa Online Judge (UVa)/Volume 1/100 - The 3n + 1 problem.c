#include<stdio.h>
int main()
{
    long int i, j, t, mcl, n, clpi;
 
    while( scanf("%ld %ld", &i, &j)==2 )
    {
        printf("%ld %ld ", i, j);
 
        if( i>j )
        {
            t = i;
            i = j;
            j = t;
        }
 
        mcl = 0;
        while( i<=j )
        {
            n = i;
            clpi = 1;
            while( n!=1 )
            {
                if( n%2==0 )
                    n = n/2;
                else
                    n = (3*n)+1;
 
                clpi++;
            }
 
            if( clpi>mcl )
                mcl = clpi;
 
            i++;
        }
        printf("%ld\n", mcl);
    }
    return 0;
}