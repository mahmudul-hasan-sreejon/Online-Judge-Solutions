#include <cstdio>

long long matrix[102][102];
char temp[3];

int main()
{
    int tc, nCase;
    char dump;

    scanf("%d%c", &tc, &dump);
    nCase = 0;
    while( tc-- )
    {
        int n;
        scanf("%s %s %d", temp, temp, &n);

        bool flag = true;
        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<n ; j++)
            {
                scanf("%lld", &matrix[i][j]);
                if( matrix[i][j]<0 ) flag = false;
            }

        if( !flag )
        {
            printf("Test #%d: Non-symmetric.\n", ++nCase);
            continue;
        }

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n-i ; j++)
            {
                if( matrix[i][j]!=matrix[n-1-i][n-1-j] )
                {
                    flag = false;
                    break;
                }
            }
            if( !flag ) break;
        }

        if( flag ) printf("Test #%d: Symmetric.\n", ++nCase);
        else printf("Test #%d: Non-symmetric.\n", ++nCase);
    }
    return 0;
}
