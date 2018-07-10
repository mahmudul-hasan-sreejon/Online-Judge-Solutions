#include <cstdio>
#include <cstring>

char teamOutput[25], judgeOutput[25], temp[25];

int main()
{
    int tc, nCase;
    char dump;

    scanf("%d%c", &tc, &dump);
    nCase = 1;
    while( tc-- )
    {
        gets(teamOutput);
        gets(judgeOutput);

        if( !strcmp(teamOutput, judgeOutput) ) printf("Case %d: Yes\n", nCase);
        else
        {
            int len = strlen(teamOutput), pos = 0;
            for(int i=0 ; i<len ; i++)
            {
                if( teamOutput[i]!=' ' )
                {
                    temp[pos] = teamOutput[i];
                    pos++;
                }
            }
            temp[pos] = '\0';

            strcpy(teamOutput, temp);

            if( !strcmp(teamOutput, judgeOutput) ) printf("Case %d: Output Format Error\n", nCase);
            else printf("Case %d: Wrong Answer\n", nCase);
        }
        ++nCase;
    }
    return 0;
}
