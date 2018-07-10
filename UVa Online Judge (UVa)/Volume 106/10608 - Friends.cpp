#include <bits/stdc++.h>

using namespace std;

const int MAXN = 30000;
vector <int> edge[MAXN+2];
bool visited[MAXN+2];
int counter;

void dfs( int node ) {
    if( visited[node] ) return;
    visited[node] = true;
    ++counter;
    for( int i = 0 ; i < edge[node].size() ; ++i ) {
        int now = edge[node][i];
        dfs( now );
    }
}

int main( int argc, char ** argv ) {
    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int N, M;
        scanf( "%d %d", &N, &M );
        for( int i = 1 ; i <= M ; ++i ) {
            int A, B;
            scanf( "%d %d", &A, &B );

            edge[A].push_back( B );
            edge[B].push_back( A );
        }

        memset( visited, false, sizeof( visited ) );

        int result = 0;
        for( int i = 1 ; i <= N ; ++i ) {
            counter = 0;
            if( !visited[i] ) dfs( i );
            result = max( result, counter );
        }

        printf( "%d\n", result );

        for( int i = 0 ; i <= N ; ++i ) edge[i].clear();
    }
    return 0;
}
