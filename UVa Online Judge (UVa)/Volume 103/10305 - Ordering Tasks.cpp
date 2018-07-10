#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
vector < int > graph[MAXN+2];
bool color[MAXN+2];
stack < int > s;

void dfs( int node ) {
    if( color[node] ) {
        return;
    }
    color[node] = true;
    for( int i = 0 ; i < graph[node].size() ; ++i ) {
        dfs( graph[node][i] );
    }
    s.push( node );
}

int main( int argc, char ** argv ) {
    int n, m;
    while( scanf( "%d %d", &n, &m ) == 2 && (n || m) ) {
        for( int i = 1 ; i <= m ; ++i ) {
            int x, y;
            scanf( "%d %d", &x, &y );
            graph[x].push_back( y );
        }

        memset( color, false, sizeof( color ) );

        for( int i = 1 ; i <= n ; ++i ) {
            dfs( i );
        }

        bool flag = false;
        while( !s.empty() ) {
            if( flag ) printf( " " );
            flag = true;
            printf( "%d", s.top() );
            s.pop();
        }
        puts( "" );

        for( int i = 0 ; i <= MAXN ; ++i ) {
            graph[i].clear();
        }
    }
    return 0;
}
