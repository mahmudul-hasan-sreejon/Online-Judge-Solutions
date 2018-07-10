#include <cstdio>
#include <cstring>

const int S = 102;
int n, matrix[S][S], rowSum[S], columnSum[S];
int rowFlag, columnFlag, rowFix, columnFix;

int main()
{
    while( scanf("%d", &n)==1 && n )
    {
        memset(rowSum, 0, sizeof(rowSum));
        memset(columnSum, 0, sizeof(columnSum));

        for(int i=0 ; i<n ; i++)
            for(int j=0 ; j<n ; j++)
            {
                scanf("%d", &matrix[i][j]);

                columnSum[j] += matrix[i][j];
                rowSum[i] += matrix[i][j];
            }

        rowFlag = columnFlag = 0;
        for(int i=0 ; i<n ; i++)
        {
            if( rowSum[i]%2==1 ) rowFlag++;
            if( columnSum[i]%2==1 ) columnFlag++;
            for(int j=0 ; j<n ; j++)
                if( rowSum[i]%2==1 && columnSum[j]%2==1 ) rowFix = i+1, columnFix = j+1;
        }

        if( rowFlag>1 || columnFlag>1 ) printf("Corrupt\n");
        else if( rowFlag==1 && columnFlag==1 ) printf("Change bit (%d,%d)\n", rowFix, columnFix);
        else printf("OK\n");
    }
    return 0;
}
