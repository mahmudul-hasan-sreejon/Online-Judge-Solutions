#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
vector <int> edge[MAXN+2];
bool visited[MAXN+2];

void dfs( int node ) {
    if( visited[node] ) return;
    visited[node] = true;
    for( int i = 0 ; i < edge[node].size() ; ++i ) dfs( edge[node][i] );
}

int main( int argc, char ** argv ) {
    // freopen( "input1.txt", "r", stdin );

    int n, m;
    scanf( "%d %d", &n, &m );

    for( int i = 1 ; i <= m ; ++i ) {
        int x, y;
        scanf( "%d %d", &x, &y );

        edge[x].push_back( y );
        edge[y].push_back( x );
    }

    bool flag = false;
    if( n == m ) {
        memset( visited, false, sizeof( visited ) );

        dfs( 1 );

        flag = true;
        for( int i = 1 ; i <=n ; ++i )
            if( !visited[i] ) {
                flag = false;
                break;
            }
    }

    if( flag ) puts( "FHTAGN!" );
    else puts( "NO" );

    return 0;
}