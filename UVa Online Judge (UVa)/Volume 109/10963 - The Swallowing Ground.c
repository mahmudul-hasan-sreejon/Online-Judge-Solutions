#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int n;
        scanf("%d", &n);

        int up, down;
        scanf("%d %d", &up, &down);

        int d = up - down;

        int i, flag = 1;
        for(i=0 ; i<n-1 ; i++)
        {
            scanf("%d %d", &up, &down);
            if( d != up - down )
                flag = 0;
        }

        if( flag )
            printf("yes\n");
        else
            printf("no\n");

        if( tc )
            printf("\n");
    }
    return 0;
}
