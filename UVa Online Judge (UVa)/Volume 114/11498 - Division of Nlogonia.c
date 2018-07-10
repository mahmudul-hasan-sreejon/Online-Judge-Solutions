#include <stdio.h>

int main()
{
	int K, n, m, i, x, y;

	while( scanf("%d", &K)==1 && K!=0 )
	{
	    scanf("%d %d", &n, &m);

	    for(i=1 ; i<=K ; i++)
        {
            scanf("%d %d", &x, &y);

            x -= n;
            y -= m;

            if( x>0 && y>0 )
                printf("NE\n");
            else if( x>0 && y<0 )
                printf("SE\n");
            else if( x<0 && y<0 )
                printf("SO\n");
            else if( x<0 && y>0 )
                printf("NO\n");
            else
                printf("divisa\n");
        }
	}
	return 0;
}
