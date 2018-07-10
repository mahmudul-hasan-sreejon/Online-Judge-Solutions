#include <stdio.h>

int h[100];

int main()
{
    int n, ncase;

    ncase = 0;
    while( scanf("%d", &n)==1 && n!=0 )
    {
        int i, sum = 0;
        for(i=0 ; i<n ; i++)
        {
            scanf("%d", &h[i]);
            sum += h[i];
        }

        sum /= n;

        int move = 0;
        for(i=0 ; i<n ; i++)
            if( sum<h[i] )
                move += h[i]-sum;

        printf("Set #%d\nThe minimum number of moves is %d.\n\n", ++ncase, move);
    }
    return 0;
}
