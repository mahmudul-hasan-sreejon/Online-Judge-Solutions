#include<stdio.h>
int main()
{
    int tc, i, j, sum, serial, num[1000];

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d", &serial);

        sum=0;
        for(j=1 ; j<=serial ; j++)
        {
            scanf("%d", &num[j]);

            if( num[j]>0 )
                sum = sum+num[j];
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
