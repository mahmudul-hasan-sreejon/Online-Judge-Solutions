#include <cstdio>
#include <cstring>

const int S = 105;
char str[S], graph[S][S];

int main()
{
    int tc, nCase;
    char dump;

    scanf("%d%c", &tc, &dump);
    nCase = 1;
    while( tc-- )
    {
        scanf("%s", str);

        memset(graph, ' ', sizeof(graph));

        int len = strlen(str), pos = 50;
        for(int i=0 ; i<len ; i++)
        {
            if( str[i]=='R' ) graph[pos--][i+2] = '/';
            else if( str[i]=='F' ) graph[++pos][i+2] = '\\';
            else if( str[i]=='C' ) graph[pos][i+2] = '_';
        }

        printf("Case #%d:\n", nCase);
        bool flag = false;
        for(int i=0 ; i<S ; i++)
        {
            for(pos = S-1 ; pos>=0 ; pos--)
                if( graph[i][pos]!=' ' ) break;

            if( pos>=0 )
            {
                printf("| ");
                for(int k=2 ; k<=pos ; k++) printf("%c", graph[i][k]);
                printf("\n");
                flag = true;
            }
            else if( pos<0 && flag )
            {
                printf("+");
                for(int k=0 ; k<=len+1 ; k++) printf("-");
                printf("\n");
                break;
            }
        }
        printf("\n");
        ++nCase;
    }
    return 0;
}
