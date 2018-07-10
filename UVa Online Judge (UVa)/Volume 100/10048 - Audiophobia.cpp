#include <cstdio>

#define MAX 105
#define INF ((1<<31)-(1))
#define Min(a, b) ((a<b)?(a):(b))
#define Max(a, b) ((a>b)?(a):(b))

int decibel[MAX][MAX];

int main()
{
    int C, S, Q, nCase = 1;
    bool flag = false;
    while( scanf("%d %d %d", &C, &S, &Q)==3 && (C || S || Q) )
    {
        for(int i=0 ; i<MAX ; i++)
            for(int j=0 ; j<MAX ; j++) decibel[i][j] = INF;

        for(int i=1 ; i<=S ; i++)
        {
            int c1, c2, d;
            scanf("%d %d %d", &c1, &c2, &d);
            decibel[c1][c2] = decibel[c2][c1] = d;
        }

        for(int k=1 ; k<=C ; k++)
            for(int i=1 ; i<=C ; i++)
                for(int j=1 ; j<=C ; j++)
                    decibel[i][j] = Min(decibel[i][j], Max(decibel[i][k], decibel[k][j]));

        if( flag ) printf("\n");
        flag = true;
        printf("Case #%d\n", nCase);
        for(int i=1 ; i<=Q ; i++)
        {
            int c1, c2;
            scanf("%d %d", &c1, &c2);
            if( decibel[c1][c2]==INF ) printf("no path\n");
            else printf("%d\n", decibel[c1][c2]);
        }
        nCase++;
    }
    return 0;
}
