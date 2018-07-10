#include <stdio.h>

int main()
{
    int N;

    while( scanf("%d", &N)==1 )
    {
        int i, num[N];
        for(i=0 ; i<N ; i++)
            scanf("%d", &num[i]);

        int temp[N], temp_len = 0;
        for(i=1 ; i<N ; i++)
            temp[temp_len++] = abs( num[i]-num[i-1] );

        int j, t;
        for(i=1 ; i<temp_len ; i++)
            for(j=1 ; j<=temp_len-i ; j++)
                if( temp[j-1]>=temp[j] )
                {
                    t = temp[j-1];
                    temp[j-1] = temp[j];
                    temp[j] = t;
                }

        int flag = 1;
        for(i=0 ; i<temp_len ; i++)
            if( temp[i]!=i+1 )
            {
                flag = 0;
                break;
            }

        if( flag==1 )
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
