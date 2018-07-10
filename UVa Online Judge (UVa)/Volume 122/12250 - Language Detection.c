#include <stdio.h>
#include <string.h>

int main()
{
	int ncase;
	char S[15];

    ncase = 0;
	while( 1 )
	{
        scanf("%s", S);

        if( S[0]=='#' )
            break;
        else
        {
            if( strcmp(S, "HELLO")==0 )
                printf("Case %d: ENGLISH\n", ++ncase);
            else if( strcmp(S, "HOLA")==0 )
                printf("Case %d: SPANISH\n", ++ncase);
            else if( strcmp(S, "HALLO")==0 )
                printf("Case %d: GERMAN\n", ++ncase);
            else if( strcmp(S, "BONJOUR")==0 )
                printf("Case %d: FRENCH\n", ++ncase);
            else if( strcmp(S, "CIAO")==0 )
                printf("Case %d: ITALIAN\n", ++ncase);
            else if( strcmp(S, "ZDRAVSTVUJTE")==0 )
                printf("Case %d: RUSSIAN\n", ++ncase);
            else
                printf("Case %d: UNKNOWN\n", ++ncase);
        }
	}
	return 0;
}
