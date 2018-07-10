#include <stdio.h>
#include <string.h>

int main()
{
    char line[1000];

    while( gets(line) && strcmp(line, "DONE") )
    {
        int len = strlen(line);

        char temp[1000];

        int i, temp_len = 0;
        for(i=0 ; i<len ; i++)
            if( line[i]!=' ' && line[i]!='.' && line[i]!=',' && line[i]!='!' && line[i]!='?' )
                temp[temp_len++] = line[i];

        int flag = 1;
        for(i=0 ; i<temp_len ; i++)
        {
            if( temp[i]!=temp[temp_len-1-i] && temp[i]!=temp[temp_len-1-i]+32 && temp[i]!=temp[temp_len-1-i]-32 )
            {
                printf("Uh oh..\n");
                flag = 0;
                break;
            }
        }

        if( flag==1 )
            printf("You won't be eaten!\n");
    }
    return 0;
}
