#include <cstdio>

int tc, n, p, pi;
bool status[1005];

int main()
{
    scanf("%d", &tc);
    while( tc-- )
    {
        status[0] = true;
        for(int i=1 ; i<1002 ; i++) status[i] = false;

        scanf("%d", &n);
        scanf("%d", &p);
        for(int i=0 ; i<p ; i++)
        {
            scanf("%d", &pi);
            for(int j=n-pi ; j>=0 ; j--)
                if( !status[j+pi] && status[j] ) status[j+pi] = true;
        }

        if( status[n] ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
