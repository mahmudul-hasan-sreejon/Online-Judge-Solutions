#include <stdio.h>
int main()
{
    int tc, i, a, b, c;

    while ( scanf("%d", &tc)==1 )
    {
        for(i=1 ; i<=tc ; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a) )
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
        break;
    }
    return 0;
}
