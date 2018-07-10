#include <cstdio>

int factorial[1005][3000];

int main()
{
    factorial[0][0] = factorial[1][0] = 1;
    for(int i=2 ; i<1005 ; i++)
        for(int j=0 ; j<3000 ; j++)
        {
            factorial[i][j] += factorial[i-1][j]*i;
            if( factorial[i][j]>9 )
            {
                factorial[i][j+1] += factorial[i][j]/10;
                factorial[i][j] %= 10;
            }
        }

    int n;

    while( scanf("%d", &n)==1 )
    {
        int pos;
        for(pos=3000-1 ; pos>0 ; pos--)
            if( factorial[n][pos]!=0 ) break;

        printf("%d!\n", n);
        for( ; pos>=0 ; pos--) printf("%d", factorial[n][pos]);
        printf("\n");
    }
    return 0;
}
