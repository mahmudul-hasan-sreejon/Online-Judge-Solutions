#include <cstdio>

int factorial[367][785], counter[12];

int main()
{
    factorial[0][0] = factorial[1][0] = 1;
    for(int i=2 ; i<367 ; i++)
        for(int j=0 ; j<785 ; j++)
        {
            factorial[i][j] += factorial[i-1][j]*i;
            if( factorial[i][j]>9 )
            {
                factorial[i][j+1] += factorial[i][j]/10;
                factorial[i][j] %= 10;
            }
        }

    int n;

    while( scanf("%d", &n)!=EOF && n )
    {
        int pos;
        for(pos=785-1 ; pos>0 ; pos--)
            if( factorial[n][pos]!=0 ) break;

        for(int i=0 ; i<10 ; i++) counter[i] = 0;

        for( ; pos>=0 ; pos--) counter[factorial[n][pos]]++;

        printf("%d! --\n", n);
        printf("   (0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n", counter[0], counter[1], counter[2], counter[3], counter[4]);
        printf("   (5)    %d    (6)    %d    (7)    %d    (8)    %d    (9)    %d\n", counter[5], counter[6], counter[7], counter[8], counter[9]);
    }
    return 0;
}
