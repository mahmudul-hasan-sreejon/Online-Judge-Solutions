#include <cstdio>

#define MAXN 1002
#define MAXE 2002
#define INF (((2)<<(30))-(1))

int d[MAXN], edge_u[MAXE], edge_v[MAXE], edge_cost[MAXE];

int main()
{
    int tc;
    scanf("%d", &tc);
    while( tc-- )
    {
        int node, edge;
        scanf("%d %d", &node, &edge);

        for(int i=1 ; i<=node ; i++) d[i] = INF;

        d[1] = 0;
        for(int i=1 ; i<=edge ; i++) scanf("%d %d %d", &edge_u[i], &edge_v[i], &edge_cost[i]);

        bool neg_cycle = false;
        for(int step=1 ; step<=node ; step++)
        {
            bool updated = false;
            for(int i=1 ; i<=edge ; i++)
            {
                int u = edge_u[i], v = edge_v[i];
                if( d[u]+edge_cost[i] < d[v] )
                {
                    updated = true;
                    if( step==node ) neg_cycle = true;
                    d[v] = d[u]+edge_cost[i];
                }
            }
            if( !updated ) break;
        }

        if( neg_cycle ) puts("possible");
        else puts("not possible");
    }
    return 0;
}
