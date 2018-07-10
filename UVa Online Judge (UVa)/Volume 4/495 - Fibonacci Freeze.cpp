#include <cstdio>

int fibonacci[5005][2005];

int main()
{
    fibonacci[0][0] = 0, fibonacci[1][0] = 1;
    for(int i=2 ; i<5005 ; i++)
    {
        for(int j=0 ; j<2005 ; j++)
        {
            fibonacci[i][j] += fibonacci[i-1][j]+fibonacci[i-2][j];

            if( fibonacci[i][j]>9 )
            {
                fibonacci[i][j+1] += fibonacci[i][j]/10;
                fibonacci[i][j] %= 10;
            }
        }
    }

    int n;

    while( scanf("%d", &n)==1 )
    {
        int pos;
        for(pos=2005-1 ; pos>0 ; pos--)
            if( fibonacci[n][pos]!=0 ) break;

        printf("The Fibonacci number for %d is ", n);
        for( ; pos>=0 ; pos--) printf("%d", fibonacci[n][pos]);
        printf("\n");
    }
    return 0;
}
