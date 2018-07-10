#include <stdio.h>
#include <string.h>

int main()
{
    int tc, i;
    char dump;

    scanf("%d%c", &tc, &dump);
    for(i=1 ; i<=tc ; i++)
    {
        char s[100];
        while( gets(s)!='\0' )
        {
            int len = strlen(s);
            if( len==0 )
                break;

            int j;
            for(j=0 ; j<len ; j++)
            {
                if( s[j]=='4' )
                    printf("A");
                else if( s[j]=='8' )
                    printf("B");
                else if( s[j]=='3' )
                    printf("E");
                else if( s[j]=='6' )
                    printf("G");
                else if( s[j]=='1' )
                    printf("I");
                else if( s[j]=='0' )
                    printf("O");
                else if( s[j]=='9' )
                    printf("P");
                else if( s[j]=='5' )
                    printf("S");
                else if( s[j]=='7' )
                    printf("T");
                else if( s[j]=='2' )
                    printf("Z");
                else
                    printf("%c", s[j]);
            }
            printf("\n");
        }
        if( i!=tc )
            printf("\n");
    }
    return 0;
}
