#include <stdio.h>

int main()
{
	int tc, i, n, result;

    scanf("%d", &tc);
	for(i=1 ; i<=tc ; i++)
	{
        scanf("%d", &n);

        result = (((((((n*567)/9)+7492)*235)/47)-498)/10)%10;

        if( result<0 )
            printf("%d\n", result*-1);
        else
            printf("%d\n", result);
	}
	return 0;
}
