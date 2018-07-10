#include <cstdio>
#include <cstring>

char line[105];

int main()
{
    int tc, nCase;
    char dump;

    scanf("%d%c", &tc, &dump);
    nCase = 0;
    while( tc-- )
    {
        scanf("%s", line);

        printf("Case %d: ", ++nCase);
        int len = strlen(line);
        for(int i=0 ; i<len ; )
        {
            char letter;
            if( line[i]>='A' && line[i]<='Z' ) letter = line[i++];

            int counter = 0;
            while( line[i]>='0' && line[i]<='9' ) counter = (counter*10)+(line[i++]-'0');

            for(int j=0 ; j<counter ; j++) printf("%c", letter);
        }
        printf("\n");
    }
    return 0;
}
