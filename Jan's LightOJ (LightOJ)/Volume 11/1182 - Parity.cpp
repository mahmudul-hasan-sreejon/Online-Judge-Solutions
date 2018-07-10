#include <cstdio>
 
int tc, nCase, n, counter;
 
int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d", &n);
 
        counter = 0;
        while( n )
        {
            if( n&1 ) counter++;
            n = n>>1;
        }
 
        if( counter&1 ) printf("Case %d: odd\n", nCase);
        else printf("Case %d: even\n", nCase);
        nCase++;
    }
    return 0;
}