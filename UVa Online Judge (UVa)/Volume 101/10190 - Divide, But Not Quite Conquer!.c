#include <stdio.h>

int main()
{
    long n, m;

    while( scanf("%ld %ld", &n, &m)==2 )
    {
        long a[100000], flag = 0, i;

        if( n<2 || m<2 || n<m )
            flag = 1;
        else
        {
            a[0] = n;
            i = 1;
            while( n!=1 )
            {
                if( n%m==0 )
                {
                    n /= m;
                    a[i] = n;
                    if( a[i-1]<=a[i] )
                    {
                        flag = 1;
                        break;
                    }
                    i++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if( flag==1 )
            printf("Boring!\n");
        else
        {
            i = 0;
            while( 1 )
            {
                if( a[i]==1 )
                {
                    printf("%ld\n", a[i]);
                    break;
                }
                else
                    printf("%ld ", a[i]);
                i++;
            }
        }
    }
    return 0;
}
