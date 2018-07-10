#include <cstdio>
#include <cmath>
 
int tc, nCase;
long long W, N, M, temp;
bool flag;
 
int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%lld", &W);
 
        flag = false, M = 1;
        while( W )
        {
            if( !(W&1) )
            {
                M = M<<1;
                N = W>>1;
                if( N&1 && N>1 )
                {
                    flag = true;
                    break;
                }
                W = W>>1;
            }
            else break;
        }
 
        if( flag ) printf("Case %d: %lld %lld\n", nCase, N, M);
        else printf("Case %d: Impossible\n", nCase);
        nCase++;
    }
    return 0;
}