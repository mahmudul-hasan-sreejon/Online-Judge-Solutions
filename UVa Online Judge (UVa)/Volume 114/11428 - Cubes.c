#include <stdio.h>
#include <math.h>

int main()
{
    int N;

    while( scanf("%d", &N)==1 && N!=0 )
    {
        int x, y, flag;

        flag = 0;
        for(x=pow(N, (1/3)) ; x<sqrt(N) ; x++)
        {
            for(y=1 ; y<x ; y++)
            {
                if( N==x*x*x-y*y*y )
                {
                    flag = 1;
                    break;
                }
            }
            if( flag==1 )
                break;
        }

        if( flag==1 )
            printf("%d %d\n", x, y);
        else
            printf("No solution\n");
    }
    return 0;
}
