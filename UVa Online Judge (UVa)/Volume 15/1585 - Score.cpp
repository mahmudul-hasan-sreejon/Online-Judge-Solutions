#include <cstdio>
#include <cstring>

char line[85];

int main()
{
    int tc;
    char dump;

    scanf("%d%c", &tc, &dump);
    while( tc-- )
    {
        scanf("%s", line);

        int sum = 0, temp = 0;
        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]=='O' ) sum += ++temp;
            if( line[i]=='X' ) temp = 0;
        }

        printf("%d\n", sum);
    }
    return 0;
}
