#include <stdio.h>

int main()
{
	int n, ncase, i, N, result;

    ncase = 0;
	while( 1 )
	{
        scanf("%d", &n);

        if( n==0 )
            break;
        else
        {
            result = 0;
            for(i=1 ; i<=n ; i++)
            {
                scanf("%d", &N);

                if( N==0 )
                    result -= 1;
                else
                    result += 1;
            }
            printf("Case %d: %d\n", ++ncase, result);
        }
	}
	return 0;
}
