#include <cstdio>
#include <cstring>

const int MAX = 1005;
char X[MAX], Y[MAX];
int m, n, LCS[MAX][MAX];

int LCS_length()
{
    m = strlen(X);
    n = strlen(Y);

    for(int i=1 ; i<=m ; i++) LCS[i][0]=0;
    for(int j=0 ; j<=n ; j++) LCS[0][j]=0;

    for(int i=1 ; i<=m ; i++)
        for(int j=1 ; j<=n ; j++)
        {
            if( X[i-1]==Y[j-1] ) LCS[i][j] = LCS[i-1][j-1]+1;
            else if( LCS[i-1][j]>=LCS[i][j-1] ) LCS[i][j] = LCS[i-1][j];
            else LCS[i][j] = LCS[i][j-1];
        }

    return LCS[m][n];
}

int main()
{
    int nCase = 1;
    while( gets(X) && strcmp(X, "#") )
    {
        gets(Y);

        printf("Case #%d: you can visit at most %d cities.\n", nCase, LCS_length());
        nCase++;
    }
    return 0;
}
