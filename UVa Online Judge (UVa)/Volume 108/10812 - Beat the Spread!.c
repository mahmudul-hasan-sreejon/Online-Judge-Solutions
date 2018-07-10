#include <stdio.h>

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int s, d;
        scanf("%d %d", &s, &d);

        if( s>=d && (s+d)%2==0 )
            printf("%d %d\n", (s+d)/2, (s-d)/2);
        else
            printf("impossible\n");
    }
    return 0;
}
