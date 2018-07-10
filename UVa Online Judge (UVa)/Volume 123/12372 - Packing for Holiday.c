#include<stdio.h>
int main()
{
    int tc, i, a, b, c;

    scanf("%d", &tc);

    for(i=1 ; i<=tc ; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if( a<=20 && b<=20 && c<=20 )
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
