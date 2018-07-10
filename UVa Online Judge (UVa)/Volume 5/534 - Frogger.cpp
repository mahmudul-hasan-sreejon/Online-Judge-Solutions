#include <cstdio>
#include <cmath>

#define MAX 205
#define Min(a, b) ((a<b)?(a):(b))
#define Max(a, b) ((a>b)?(a):(b))
#define sqr(n)    ((n)*(n))

double x[MAX], y[MAX], distance[MAX][MAX];

int main()
{
    int n, nCase = 1;
    while( scanf("%d", &n)==1 && n )
    {
        for(int i=1 ; i<=n ; i++) scanf("%lf %lf", &x[i], &y[i]);

        for(int i=0 ; i<MAX ; i++)
            for(int j=0 ; j<MAX ; j++) distance[i][j] = 0.0;

        for(int i=1 ; i<=n ; i++)
            for(int j=i+1 ; j<=n ; j++)
            {
                double d = sqrt( sqr(x[i]-x[j]) + sqr(y[i]-y[j]) );
                distance[i][j] = distance[j][i] = d;
            }

        for(int k=1 ; k<=n ; k++)
            for(int i=1 ; i<=n ; i++)
                for(int j=1 ; j<=n ; j++)
                    distance[i][j] = Min(distance[i][j], Max(distance[i][k], distance[k][j]));

        printf("Scenario #%d\nFrog Distance = %.3lf\n\n", nCase, distance[1][2]);
        nCase++;
    }
    return 0;
}
