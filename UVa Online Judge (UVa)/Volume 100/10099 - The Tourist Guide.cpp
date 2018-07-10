#include <cstdio>
#include <cmath>

#define MAX 105
#define Min(a, b) ((a<b)?(a):(b))
#define Max(a, b) ((a>b)?(a):(b))

int wght[MAX][MAX];

int main()
{
    int N, R, nCase = 1;
    while( scanf("%d %d", &N, &R)==2 && (N || R) )
    {
        for(int i=0 ; i<MAX ; i++)
            for(int j=0 ; j<MAX ; j++) wght[i][j] = 0;

        for(int i=1 ; i<=R ; i++)
        {
            int C1, C2, P;
            scanf("%d %d %d", &C1, &C2, &P);
            wght[C1][C2] = wght[C2][C1] = P;
        }

        for(int k=1 ; k<=N ; k++)
            for(int i=1 ; i<=N ; i++)
                for(int j=1 ; j<=N ; j++)
                    wght[i][j] = Max(wght[i][j], Min(wght[i][k], wght[k][j]));

        int S, D, T;
        scanf("%d %d %d", &S, &D, &T);

        int trip = 0;
        if( S!=D ) trip = (int) (ceil((T*1.0)/(wght[S][D]-1)));

        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n", nCase, trip);
        nCase++;
    }
    return 0;
}
