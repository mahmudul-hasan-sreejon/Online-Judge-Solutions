#include <cstdio>
#include <cstring>

int N, A, sum[155][200], carry;

int main()
{
    while( scanf("%d %d", &N, &A)!=EOF )
    {
        memset(sum, 0, sizeof(sum));

        sum[0][0] = 1;
        for(int i=1 ; i<=N ; i++)
            for(int j=0 ; j<200 ; j++)
            {
                sum[i][j] += sum[i-1][j]*A;
                if( sum[i][j]>9 )
                {
                    sum[i][j+1] += sum[i][j]/10;
                    sum[i][j] %= 10;
                }
            }

        for(int i=1 ; i<=N ; i++)
        {
            carry = 0;
            for(int j=0 ; j<200 ; j++)
            {
                sum[i][j] = (sum[i][j]*i)+carry;
                carry = 0;
                if( sum[i][j]>9 )
                {
                    carry = sum[i][j]/10;
                    sum[i][j] %= 10;
                }
            }
        }

        sum[0][0] = 0;
        for(int i=1 ; i<=N ; i++)
            for(int j=0 ; j<200 ; j++)
            {
                sum[i][j] += sum[i-1][j];
                if( sum[i][j]>9 )
                {
                    sum[i][j+1] += sum[i][j]/10;
                    sum[i][j] %= 10;
                }
            }

        int pos;
        for(pos=200-1 ; pos>0 ; pos--)
            if( sum[N][pos]!=0 ) break;

        for( ; pos>=0 ; pos--) printf("%d", sum[N][pos]);
        printf("\n");

    }
    return 0;
}
