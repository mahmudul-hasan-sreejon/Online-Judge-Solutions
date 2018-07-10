#include<stdio.h>
int main ()
{
    long int tc, i, j, s, f, sum;

    scanf("%ld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%ld %ld", &s, &f);

        sum = 0;
        for(j=s ; j<=f ; j++)
        {
            if( j%2!=0 )
                sum = sum+j;
        }
        printf("Case %ld: %ld\n", i, sum);
    }
    return 0;
}
