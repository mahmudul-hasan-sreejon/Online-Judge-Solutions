#include <stdio.h>
#include <string.h>

int main()
{
	int tc, len;
	char S[1001];

    scanf("%d", &tc);
	while( tc-- )
	{
	    scanf("%s", S);

	    len = strlen(S);

        if( strcmp(S, "1")==0 || strcmp(S, "4")==0 || strcmp(S, "78")==0 )
            printf("+\n");
        else if( S[len-2]=='3' && S[len-1]=='5' )
            printf("-\n");
        else if( S[0]=='9' && S[len-1]=='4' )
            printf("*\n");
        else if( S[0]=='1' && S[1]=='9' && S[2]=='0' )
            printf("?\n");
	}
	return 0;
}
