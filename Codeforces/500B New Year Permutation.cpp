#include <bits/stdc++.h>

using namespace std;

const int MAXN = 300;
int p[MAXN+2];
char A[MAXN+2];
vector <int> edge[MAXN+2];
bool visited[MAXN+2];
vector <int> index, value;

void dfs( int node ) {
    if( visited[node] ) return;
    visited[node] = true;
    index.push_back( node );
    value.push_back( p[node] );
    for( int i = 0 ; i < edge[node].size() ; ++i ) dfs( edge[node][i] );
}

int main( int argc, char ** argv ) {
    int n;
    scanf( "%d", &n );
    for( int i = 1 ; i <= n ; ++i ) scanf( "%d", &p[i] );

    for( int i = 1 ; i <= n ; ++i ) {
        scanf( "%s", A );
        for( int j = 0 ; j < n ; ++j )
            if( A[j] == '1' ) edge[i].push_back( j + 1 );
    }

    memset( visited, false, sizeof( visited ) );
    for( int i = 1 ; i <= n ; ++i ) {
        if( visited[i] ) continue;
        index.clear(), value.clear();
        dfs( i );
        sort( index.begin(), index.end() );
        sort( value.begin(), value.end() );
        for( int j = 0 ; j < index.size() ; ++j ) p[index[j]] = value[j];
    }

    for( int i = 1 ; i <= n ; ++i ) printf( "%d ", p[i] );
    puts( "" );

    return 0;
}