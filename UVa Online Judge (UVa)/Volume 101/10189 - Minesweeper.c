#include <stdio.h>

int main()
{
    int n, m, ncase, new_line;

    ncase = 0, new_line = 0;
    while( scanf("%d %d", &n, &m)==2 && n+m!=0 )
    {
        char a[n][m];
        int i, j;

        for(i=0 ; i<n ; i++)
            scanf("%s", a[i]);

        int b[n+1][m+1];

        for(i=0 ; i<n+1 ; i++)
            for(j=0 ; j<m+1 ; j++)
                b[i][j] = 0;

        for(i=0 ; i<n ; i++)
            for(j=0 ; j<m ; j++)
                if( a[i][j]=='*' )
                {
                    b[i][j+1]++;
                    b[i][j-1]++;
                    b[i+1][j+1]++;
                    b[i+1][j]++;
                    b[i+1][j-1]++;
                    b[i-1][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j+1]++;
                }

        if( new_line==1 )
            printf("\n");
        new_line = 1;

        printf("Field #%d:\n", ++ncase);
        for(i=0 ; i<n ; i++)
        {
            for(j=0 ; j<m ; j++)
            {
                if( a[i][j]=='*' )
                    printf("%c", a[i][j]);
                else
                    printf("%d", b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
