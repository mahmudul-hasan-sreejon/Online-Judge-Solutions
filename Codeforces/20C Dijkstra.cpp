#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;
const long long INF = 1000000000000000000;
vector < int > edge[MAXN+5];
vector < long long > cost[MAXN+5];
long long d[MAXN+5];
int path[MAXN+5];

struct data {
    int city;
    long long dist;
    bool operator < (const data& p) const {
        return dist > p.dist;
    }
} ;

long long dijkstra( int source, int destination ) {
    data u, v;
    priority_queue < data > pq;

    for( int i = 0 ; i <= MAXN ; ++i ) {
        d[i] = INF;
    }
    memset( path, -1, sizeof( path ) );

    u.city = source, u.dist = 0;
    pq.push( u ), d[source] = 0;
    while( !pq.empty() ) {
        u = pq.top();
        pq.pop();
        for( int i = 0 ; i < edge[u.city].size() ; ++i ) {
            v.city = edge[u.city][i];
            v.dist = cost[u.city][i] + d[u.city];
            if( d[v.city] > v.dist ) {
                d[v.city] = v.dist;
                path[v.city] = u.city;
                pq.push( v );
            }
        }
    }
    return d[destination];
}

void printPath( int source, int destination ) {
    if( source == destination ) {
        printf( "%d", destination );
    }
    else {
        printPath( source, path[destination] );
        printf( " %d", destination );
    }
}

int main( int argc, char ** argv ) {
    // freopen( "input.txt", "r", stdin );

    int n, m;
    scanf( "%d %d", &n, &m );
    for( int i = 1 ; i <= m ; ++i ) {
        int a, b;
        long long w;
        scanf( "%d %d %I64d", &a, &b, &w );

        edge[a].push_back( b );
        edge[b].push_back( a );

        cost[a].push_back( w );
        cost[b].push_back( w );
    }

    long long dis = dijkstra( 1, n );

    if( dis == INF ) puts( "-1" );
    else {
        printPath( 1, n );
        puts( "" );
    }
    return 0;
}