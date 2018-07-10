#include <cstdio>

int main()
{
    int R, N, nCase;

    nCase = 1;
    while( scanf("%d %d", &R, &N)!=EOF && (R || N) )
    {
        int D = (R-1)/N;

        if( D<=26 ) printf("Case %d: %d\n", nCase, D);
        else printf("Case %d: impossible\n", nCase);
        ++nCase;
    }
    return 0;
}
