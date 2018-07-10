#include<stdio.h>
int main()
{
    int tc, i, a, b, c;

    scanf("%d", &tc);
    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if( (a<b && b<c && c>a) || (a>b && b>c && a>c) )
            printf("Case %d: %d\n", i, b);
        else if( (a>b && a<c && c>b) || (a<b && a>c && b>c) )
            printf("Case %d: %d\n", i, a);
        else
            printf("Case %d: %d\n", i, c);
    }
    return 0;
}
