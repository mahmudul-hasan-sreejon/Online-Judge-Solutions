#include <bits/stdc++.h>

using namespace std;

const int infinity = (2 << 30) - 1;
const int MAX = 22;
vector <int> graph[MAX];
int d[MAX];

int bfs( int source, int destination ) {
    for( int i = 0 ; i < MAX ; i++ ) {
        d[i] = infinity;
    }
    queue <int> q;
    q.push(source), d[source] = 0;
    while( !q.empty() ) {
        int u = q.front();
        q.pop();
        for( int i = 0 ; i < graph[u].size() ; i++ ) {
            int v = graph[u][i];
            if( d[v] > d[u] + 1 ) {
                d[v] = d[u] + 1;
                q.push( v );
            }
        }
    }
    return d[destination];
}

int main( int argc, char ** argv) {
    int nCase = 1, x = 1, edges;
    while( scanf( "%d", &edges )!=EOF ) {
        for( int i = 1 ; i <= edges ; i++ ) {
            int y;
            scanf( "%d", &y );
            graph[x].push_back( y );
            graph[y].push_back( x );
        }

        if( x==19 ) {
            int N, A, B;
            scanf( "%d", &N );
            printf( "Test Set #%d\n", nCase++ );
            for( int i = 1 ; i <= N ; i++ ) {
                scanf( "%d %d", &A, &B );
                printf( "%2d to %2d: %d\n", A, B, bfs( A, B ) );
            }
            printf( "\n" );
            x = 0;
            for( int i = 0 ; i < MAX ; i++ ) {
                graph[i].clear();
            }
        }
        x++;
    }
    return 0;
}
