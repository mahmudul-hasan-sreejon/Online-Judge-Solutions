#include <cstdio>
#include <cstring>
#include <cctype>

int tc, nCase, len1, len2, serial;
char message[1005], decode[35];
bool flag;

int main()
{
    scanf("%d ", &tc);
    nCase = 1;
    while( tc-- )
    {
        printf("Case #%d:\n", nCase);
        while( gets(message) && strlen(message) )
        {
            strcat(message, " ");
            len1 = strlen(message), len2 = 0, serial = 0, flag = false;
            for(int i=0 ; i<len1 ; i++)
            {
                if( isalpha(message[i]) )
                {
                    decode[len2] = message[i];
                    len2++;
                    flag = true;
                }

                if( message[i]==' ' && flag )
                {
                    if( serial<len2 )
                    {
                        printf("%c", decode[serial]);
                        serial++;
                    }
                    len2 = 0;
                    flag = false;
                }
            }
            printf("\n");
        }
        if( tc ) printf("\n");
        nCase++;
    }
    return 0;
}
