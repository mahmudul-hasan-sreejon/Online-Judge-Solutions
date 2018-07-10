#include <stdio.h>

int main()
{
	int tc, n, max, min, n_pos;

    scanf("%d", &tc);
	while( tc-- )
	{
	    scanf("%d", &n);
	    max=0, min=100;
	    while( n-- )
        {
            scanf("%d", &n_pos);
            if( n_pos>max )
                max = n_pos;
            if( n_pos<min )
                min = n_pos;
        }
        printf("%d\n", 2*(max-min));
	}
	return 0;
}
