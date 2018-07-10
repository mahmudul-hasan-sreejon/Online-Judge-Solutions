#include <cstdio>
#include <cstring>

int tc, nCase;
int R, C, M, N;
char pixelGrid[25];
int counter[28], MAX, ans;

int main()
{
    scanf("%d", &tc);
    nCase = 1;
    while( tc-- )
    {
        scanf("%d %d %d %d", &R, &C, &M, &N);

        memset(counter, 0, sizeof(counter));
        for(int i=1 ; i<=R ; i++)
        {
            scanf("%s", pixelGrid);
            for(int j=0 ; j<C ; j++) counter[pixelGrid[j]-'A']++;
        }

        MAX = -1;
        for(int i=0 ; i<26 ; i++)
            if( counter[i]>MAX ) MAX = counter[i];

        ans = 0;
        for(int i=0 ; i<26 ; i++)
            if( counter[i]==MAX ) ans += counter[i]*M;
            else ans += counter[i]*N;

        printf("Case %d: %d\n", nCase, ans);
        ++nCase;
    }
    return 0;
}
