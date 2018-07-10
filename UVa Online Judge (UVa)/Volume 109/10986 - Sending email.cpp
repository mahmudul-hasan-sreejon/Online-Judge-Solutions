#include <bits/stdc++.h>

using namespace std;

const int INF = ((1<<31) - (1));
const int MAXN = 50000;
vector < int > edge[MAXN+2];
vector < int > cost[MAXN+2];

struct data {
    int city, dist;
    bool operator < ( const data & p ) const {
        return dist > p.dist;
    }
} ;

int dijkstra( int source, int destination ) {
    data u, v;
    priority_queue < data > q;
    int d[MAXN+2];
    for( int i = 0 ; i < MAXN ; ++i ) {
        d[i] = INF;
    }

    u.city = source, u.dist = 0;
    q.push( u ), d[source] = 0;
    while( !q.empty() ) {
        u = q.top();
        q.pop();
        for( int i = 0 ; i < edge[u.city].size() ; ++i ) {
            v.city = edge[u.city][i];
            v.dist = cost[u.city][i] + d[u.city];
            if( d[v.city] > v.dist ) {
                d[v.city] = v.dist;
                q.push( v );
            }
        }
    }
    return d[destination];
}

int main( int argc, char ** argv ) {
    int N;
    scanf( "%d", &N );
    for( int nCase = 1 ; nCase <= N ; ++nCase ) {
        int n, m, S, T;
        scanf( "%d %d %d %d", &n, &m, &S, &T );

        for( int i = 1 ; i <= m ; ++i ) {
            int x, y, c;
            scanf( "%d %d %d", &x, &y, &c );

            edge[x].push_back( y );
            edge[y].push_back( x );

            cost[x].push_back( c );
            cost[y].push_back( c );
        }

        int dis = dijkstra( S, T );
        if( dis == INF ) {
            printf( "Case #%d: unreachable\n", nCase );
        }
        else {
            printf( "Case #%d: %d\n", nCase, dis );
        }

        for( int i = 0 ; i < m ; ++i ) {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
