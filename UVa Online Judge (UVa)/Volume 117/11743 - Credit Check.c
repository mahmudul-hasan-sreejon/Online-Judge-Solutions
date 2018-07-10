#include <stdio.h>

int credit[20];

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int i;
        for(i=1 ; i<=16 ; i++)
            scanf("%1d", &credit[i]);

        int sum = 0;
        for(i=1 ; i<=16 ; i++)
        {
            if( i%2==1 )
            {
                if( 2*credit[i]>=10 )
                    sum += (2*credit[i]%10) + (2*credit[i]/10);
                else
                    sum += 2*credit[i];
            }
            else
                sum += credit[i];
        }

        if( sum%10==0 )
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
