#include <bits/stdc++.h>

#define isValid( nx, ny ) ( (nx >= 0 && nx < m) && (ny >= 0 && ny < n) )

using namespace std;

const int fx[] = { +0, +0, +1, -1, -1, +1, -1, +1 };
const int fy[] = { -1, +1, +0, +0, +1, +1, -1, -1 };

const int MAXN = 100;
char G[MAXN+2][MAXN+2];
bool visited[MAXN+2][MAXN+2];
int m, n;

struct node {
    int x, y;
};

void bfs( int x, int y ) {
    node now, next;
    queue < node > q;

    now.x = x, now.y = y;
    q.push( now );
    visited[x][y] = true;
    while( !q.empty() ) {
        now = q.front();
        q.pop();
        for( int i = 0 ; i < 8 ; ++i ) {
            next.x = now.x + fx[i];
            next.y = now.y + fy[i];
            if( isValid( next.x, next.y ) && G[next.x][next.y] == '@' && !visited[next.x][next.y] ) {
                q.push( next );
                visited[next.x][next.y] = true;
            }
        }
    }
}

int main( int argc, char ** argv ) {
    while( scanf( "%d %d", &m , &n ) == 2 && m ) {
        for( int i = 0 ; i < m ; ++i ) {
            scanf( "%s", G[i] );
        }

        memset( visited, false, sizeof( visited ) );

        int counter = 0;
        for( int i = 0 ; i < m ; ++i ) {
            for( int j = 0 ; j < n ; ++j ) {
                if( G[i][j] == '@' && !visited[i][j] ) {
                    bfs( i, j );
                    ++counter;
                }
            }
        }

        printf( "%d\n", counter );
    }
    return 0;
}
