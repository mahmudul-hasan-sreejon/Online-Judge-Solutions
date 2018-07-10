#include <cstdio>

#define sqr(n) ((n)*(n))

int rx[1005], ry[1005], r[1005];

int main()
{
    int tc, nCase = 1;
    scanf("%d", &tc);
    while( tc-- )
    {
        int n, y;
        scanf("%d %d", &n, &y);

        for(int i=0 ; i<n ; i++) scanf("%d %d %d", &rx[i], &ry[i], &r[i]);

        printf("Case %d:\n", nCase);
        for(int i=1 ; i<=y ; i++)
        {
            int xx, yy;
            scanf("%d %d", &xx, &yy);

            bool flag = false;
            for(int i=0 ; i<n ; i++)
            {
                if( sqr(r[i])>=sqr(rx[i]-xx) + sqr(ry[i]-yy) ) flag = true;
                if( flag ) break;
            }

            if( flag ) printf("Yes\n");
            else printf("No\n");
        }
        nCase++;
    }
    return 0;
}
