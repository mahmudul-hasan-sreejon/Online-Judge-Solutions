#include <cstdio>
#include <cstring>

#define MAX 1005

char X[MAX], Y[MAX];
int c[MAX][MAX];

int LCS()
{
    int m = strlen(X);
    int n = strlen(Y);

    for(int i=1 ; i<=m ; i++)
        for(int j=0 ; j<=n ; j++) c[i][j] = 0;

    for(int i=1 ; i<=m ; i++)
        for(int j=1 ; j<=n ; j++)
        {
            if( X[i-1]==Y[j-1] ) c[i][j] = c[i-1][j-1]+1;
            else if( c[i-1][j]>=c[i][j-1] ) c[i][j] = c[i-1][j];
            else c[i][j] = c[i][j-1];
        }

    return c[m][n];
}

int main()
{
    while( gets(X) && gets(Y) )
        printf("%d\n", LCS());
    return 0;
}
