#include <bits/stdc++.h>

using namespace std;

const int INF = ((1<<31) - (1));
const int MAXN = 100;
vector < int > edge[MAXN+2];
vector < int > cost[MAXN+2];
int d[MAXN+2];

struct data {
    int city, dist;
    bool operator < ( const data & p ) const {
        return dist > p.dist;
    }
} ;

void dijkstra( int source ) {
    data u, v;
    priority_queue < data > q;
    for( int i = 0 ; i <= MAXN ; ++i ) {
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
}

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        int N, E, T, M;
        scanf( "%d %d %d %d", &N, &E, &T, &M );
        for( int i = 1 ; i <= M ; ++i ) {
            int a, b, c;
            scanf( "%d %d %d", &a, &b, &c );

            edge[b].push_back( a );

            cost[b].push_back( c );
        }

        dijkstra( E );

        int mice = 0;
        for( int i = 1 ; i <= N ; ++i ) {
            if( d[i] <= T ) {
                ++mice;
            }
        }

        if( nCase > 1 ) {
            puts( "" );
        }
        printf( "%d\n", mice );

        for( int i = 1 ; i <= N ; ++i ) {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
