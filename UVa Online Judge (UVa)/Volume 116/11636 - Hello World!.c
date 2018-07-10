#include <stdio.h>

int main()
{
    int N, ncase = 0;
    while( scanf("%d", &N)==1 )
    {
        int line, paste;
        if( N<0 )
            break;
        else
        {
            line = 1, paste = 0;
            while( line<N )
            {
                line += line;
                paste++;
            }
        }

        printf("Case %d: %d\n", ++ncase, paste);
    }
    return 0;
}
