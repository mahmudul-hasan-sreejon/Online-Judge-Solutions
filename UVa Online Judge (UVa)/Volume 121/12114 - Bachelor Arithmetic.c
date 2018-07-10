#include <stdio.h>

int main()
{
    long long B, S;
    int ncase = 0;
    while( scanf("%lld %lld", &B, &S)==2 && B+S!=0 )
    {
        if( B<=1 || S==0 )
            printf("Case %d: :-\\\n", ++ncase);
        else if( S>=B )
            printf("Case %d: :-|\n", ++ncase);
        else
        {
            if( S*(B-1)>(S-1)*B )
                printf("Case %d: :-(\n", ++ncase);
            else
                printf("Case %d: :-)\n", ++ncase);
        }
    }
    return 0;
}
