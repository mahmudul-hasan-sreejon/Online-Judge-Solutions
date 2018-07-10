#include <cstdio>

const int S = 1005;
int tc, i, temp;
int W, N, x[S], w[S], dis;

int main()
{
    scanf("%d", &tc);
    while( tc-- )
    {
        scanf("%d %d", &W, &N);
        for(i=0 ; i<N ; i++) scanf("%d %d", &x[i], &w[i]);

        temp = 0, dis = 0;
        for(i=0 ; i<N ; i++)
        {
            if( temp+w[i]>W ) dis += x[i]+x[i], temp = w[i];
            else if( temp+w[i]<W ) temp += w[i];
            else dis += x[i]+x[i], temp = 0;
        }

        if( temp ) dis += x[N-1]+x[N-1];

        printf("%d\n", dis);
    }
    return 0;
}
