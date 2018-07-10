#include <stdio.h>

int main()
{
	int ncase;
	char S[10];

    ncase = 0;
	while( 1 )
	{
        scanf("%s", S);

        if( S[0]=='*' )
            break;
        else if( S[0]=='H' )
            printf("Case %d: Hajj-e-Akbar\n", ++ncase);
        else
            printf("Case %d: Hajj-e-Asghar\n", ++ncase);
	}
	return 0;
}
