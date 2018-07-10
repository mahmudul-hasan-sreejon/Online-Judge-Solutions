#include<stdio.h>
long int num_rev(long int a)
{
    long int r=0;
    while( a>0 )
    {
        r = (r*10) + (a%10);
        a = a/10;
    }
    return r;
}
int main ()
{
    int tc, i, count;
    long int num, rev;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%ld", &num);
        count = 0;
        while( 1 )
        {
            rev = num_rev(num);

            if( num==rev )
                break;
            else
            {
                num = num + rev;
                count++;
            }
        }
        printf("%d %ld\n", count, num);
    }
    return 0;
}
