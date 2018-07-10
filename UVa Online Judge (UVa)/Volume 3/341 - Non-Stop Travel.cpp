#include <bits/stdc++.h>

using namespace std;

const int INF = ((1<<31) - (1));
const int MAXN = 20;
vector < int > edge[MAXN+2];
vector < int > cost[MAXN+2];
int path[MAXN+2];

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
                path[v.city] = u.city;
            }
        }
    }
    return d[destination];
}

void printPath( int source, int destination ) {
    if( source != destination ) {
        printPath( source, path[destination] );
    }
    printf( " %d", destination );
}

int main( int argc, char ** argv ) {
    int NI, nCase = 0;
    while( scanf( "%d", &NI ) == 1 && NI ) {
        for( int x = 1 ; x <= NI ; ++x ) {
            int n;
            scanf( "%d", &n );
            for( int i = 1 ; i <= n ; ++i ) {
                int y, c;
                scanf( "%d %d", &y, &c );

                edge[x].push_back( y );

                cost[x].push_back( c );
            }
        }
        int S, T;
        scanf( "%d %d", &S, &T );

        memset( path, -1, sizeof( path ) );
        int dis = dijkstra( S, T );

        printf( "Case %d: Path =", ++nCase );
        printPath( S, T );
        printf( "; %d second delay\n", dis );

        for( int i = 1 ; i <= NI ; ++i ) {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
