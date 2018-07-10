#include <stdio.h>
#include <math.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int sum;
        scanf("%d", &sum);

        int i, j, k, flag = 0;
        for(i=0 ; i<sqrt(sum) ; i++)
        {
            for(j=i ; j<sqrt(sum - i*i) ; j++)
            {
                k = sqrt(sum - i*i - j*j);
                if( i*i+j*j+k*k==sum )
                {
                    flag = 1;
                    break;
                }
            }
            if( flag==1 )
                break;
        }

        if( flag==1 )
            printf("%d %d %d\n", i, j, k);
        else
            printf("-1\n");
    }
    return 0;
}
