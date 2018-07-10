#include <cstdio>

int fibonacci[1005][500];

int main()
{
    fibonacci[0][0] = 1, fibonacci[1][0] = 2;
    for(int i=2 ; i<1005 ; i++)
    {
        for(int j=0 ; j<500 ; j++) fibonacci[i][j] = fibonacci[i-1][j]+fibonacci[i-2][j];

        for(int j=0 ; j<500 ; j++)
        {
            fibonacci[i][j+1] += fibonacci[i][j]/10;
            fibonacci[i][j] %= 10;
        }
    }

    int n;

    while( scanf("%d", &n)==1 )
    {
        int pos;
        for(pos=500-1 ; pos>0 ; pos--)
            if( fibonacci[n][pos]!=0 ) break;

        for( ; pos>=0 ; pos--) printf("%d", fibonacci[n][pos]);
        printf("\n");
    }
    return 0;
}
