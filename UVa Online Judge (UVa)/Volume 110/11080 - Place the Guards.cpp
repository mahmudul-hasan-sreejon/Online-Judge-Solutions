#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200;
vector <int> edge[MAXN+2];
int visited[MAXN+2];

int bfs_bipartite( int source ) {
    queue < int > q;
    q.push( source ), visited[source] = 1;
    int totalGuards = 0, nWhite = 0;
    while( !q.empty() ) {
        int from = q.front();
        q.pop();
        ++totalGuards;
        if( visited[from] == 1 ) ++nWhite;
        for( int i = 0 ; i < edge[from].size() ; ++i ) {
            int to = edge[from][i];
            if( visited[from] == visited[to] ) return 0;
            if( !visited[to] ) {
                visited[to] = 3 - visited[from];
                q.push( to );
            }
        }
    }
    if( totalGuards == 1 ) return 1;
    int nBlack = totalGuards - nWhite;
    return ( min( nWhite, nBlack ) );
}

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        int v, e;
        scanf( "%d %d", &v, &e );
        for( int i = 1 ; i <= e ; ++i ) {
            int x, y;
            scanf( "%d %d", &x, &y );
            edge[x].push_back( y );
            edge[y].push_back( x );
        }

        memset( visited, 0, sizeof( visited ) );

        int guards = 0;
        for( int i = 0 ; i < v ; ++i ) {
            if( !visited[i] ) {
                int temp = bfs_bipartite( i );

                if( !temp ) {
                    guards = -1;
                    break;
                }
                else guards += temp;
            }
        }

        printf( "%d\n", guards );

        for( int i = 0 ; i < v ; ++i ) edge[i].clear();
    }
    return 0;
}
