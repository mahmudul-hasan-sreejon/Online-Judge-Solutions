#include <cstdio>
#include <cstring>

int num[17][17];

int main()
{
    int N;
    bool newLine = false;

    while( scanf("%d", &N)==1 )
    {
        memset(num, 0, sizeof(num));

        int x = 0, y = N/2, temp = N*N;
        for(int i=1 ; i<=temp ; i++)
        {
            if( num[x][y] )
            {
                x += 2, y--;
                if( x>=N ) x -= N;
                if( y<0 ) y += N;
                num[x][y] = i;
            }
            else num[x][y] = i;

            x--, y++;
            if( x<0 ) x += N;
            if( y>=N ) y -= N;
        }

        int len = 1;
        while( temp )
        {
            temp /= 10;
            len++;
        }

        if( newLine ) printf("\n");
        newLine = true;

        printf("n=%d, sum=%d\n", N, N*((N*N)+1)/2);
        for(int i=0 ; i<N ; i++)
            for(int j=0 ; j<N ; j++) printf("%*d%s", len, num[i][j], (j==N-1) ? "\n" : "");
    }
    return 0;
}
