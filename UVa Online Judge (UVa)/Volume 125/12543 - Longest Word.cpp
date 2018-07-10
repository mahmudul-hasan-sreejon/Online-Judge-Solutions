#include <cstdio>
#include <cstring>
#include <cctype>

char text[10005], str[105];
int MAX = -1, len, character;

int main()
{
    while( scanf("%s", text) && strcmp("E-N-D" , text) )
    {
        len = strlen(text), character = 0;
        for(int i=0 ; i<len ; i++)
            if( isalpha(text[i]) || text[i]=='-' ) character++;

        if( MAX<character )
        {
            MAX = character;
            strcpy(str, text);
        }
    }

    len = strlen(str);
    for(int i=0 ; i<len ; i++)
    {
        if( islower(str[i]) || str[i]=='-' ) printf("%c", str[i]);
        else if( isupper(str[i]) ) printf("%c", str[i]+32);
    }
    printf("\n");

    return 0;
}
