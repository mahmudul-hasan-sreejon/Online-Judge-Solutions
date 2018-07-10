#include <stdio.h>
 
int tc, nCase;
int x1, y1, x2, y2, M, x, y;
 
int main()
{
    nCase = 1;
    scanf("%d", &tc);
    while( tc-- )
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &M);
        printf("Case %d:\n", nCase);
        while( M-- )
        {
            scanf("%d %d", &x, &y);
            if( x>=x1 && x<=x2 && y>=y1 && y<=y2 ) printf("Yes\n");
            else printf("No\n");
        }
        nCase++;
    }
    return 0;
}