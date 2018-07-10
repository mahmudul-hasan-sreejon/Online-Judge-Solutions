#include <cstdio>
#include <cstring>

char line[135];
int len, temp;

int main()
{
    while( gets(line) )
    {
        len = strlen(line);
        for(int i=0 ; i<len ; i++)
        {
            if( line[i]=='!' ) printf("\n"), i++;

            if( line[i]>='0' && line[i]<='9' )
            {
                temp = 0;
                while( line[i]>='0' && line[i]<='9' )
                {
                    temp += line[i]-'0';
                    i++;
                }
            }

            for(int j=1 ; j<=temp ; j++)
            {
                if( line[i]=='b' ) printf(" ");
                else printf("%c", line[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
