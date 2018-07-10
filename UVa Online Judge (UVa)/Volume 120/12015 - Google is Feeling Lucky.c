#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    int ncase = 0;
    while( tc-- )
    {
        char url[11][101];
        int i, V[10];

        int max_relevance = 0;
        for(i=1 ; i<=10 ; i++)
        {
            scanf("%s %d", url[i], &V[i]);
            if( max_relevance<V[i] )
                max_relevance = V[i];
        }

        printf("Case #%d:\n", ++ncase);
        for(i=1 ; i<=10 ; i++)
        {
            if( max_relevance==V[i] )
                printf("%s\n", url[i]);
        }
    }
    return 0;
}