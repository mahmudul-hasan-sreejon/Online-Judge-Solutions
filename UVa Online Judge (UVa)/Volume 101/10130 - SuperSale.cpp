#include <cstdio>
#include <algorithm>

using namespace std;

int P[1005], W[1005], max_value[1005][450];

int main()
{
    int tc;

    scanf("%d", &tc);
    while( tc-- )
    {
        int N;
        scanf("%d", &N);
        for(int i=1 ; i<=N ; i++) scanf("%d %d", &P[i], &W[i]);

        for(int i=1 ; i<=N ; i++)
            for(int j=1 ; j<=30 ; j++)
                if( W[i]>j ) max_value[i][j] = max_value[i-1][j];
                else max_value[i][j] = max(max_value[i-1][j], max_value[i-1][j-W[i]]+P[i]);

        int G, result = 0;
        scanf("%d", &G);
        while( G-- )
        {
            int temp;
            scanf("%d", &temp);
            result += max_value[N][temp];
        }

        printf("%d\n", result);
    }
    return 0;
}
