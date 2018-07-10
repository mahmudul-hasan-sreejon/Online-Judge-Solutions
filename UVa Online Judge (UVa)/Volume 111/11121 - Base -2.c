#include<stdio.h>
int main()
{
    long long int tc, i, num, j, bn[1000], k;

    scanf("%lld", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%lld", &num);

        if( num==0 )
            printf("Case #%lld: %lld\n", i, num);
        else
        {
            j=1;
            while( num!=0 )
            {
                bn[j++] = num%(-2);
                    num = num/(-2);

                if( bn[j-1]%(-2)==-1 )
                {
                    num = num+1;
                    bn[j-1] = bn[j-1]+2;
                }
            }

            printf("Case #%lld: ", i);
            for(k=j-1 ; k>0 ; k--)
                printf("%d", bn[k]);
            printf("\n");
        }
    }
    return 0;
}
