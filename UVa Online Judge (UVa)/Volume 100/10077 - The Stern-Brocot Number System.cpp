#include <cstdio>

int main ()
{
    int m, n;

    while( scanf("%d %d", &m, &n)==2 && ( m!=1 || n!=1 ) )
    {
        int a = 0, b = 1, c = 1, d = 0, e = 1, f = 1;
        while( true )
        {
            if( e==m && f==n ) break;

            if( e*n>f*m )
            {
                printf("L");
                b = e, d = f;
            }
            else
            {
                printf("R");
                a = e, c = f;
            }
            e = a + b;
            f = c + d;
        }
        printf("\n");
    }
    return 0;
}
