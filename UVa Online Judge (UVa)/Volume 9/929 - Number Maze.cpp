#include <bits/stdc++.h>

#define isValid( nx, ny, row, col ) ( (1 <= nx && nx <= row) && (1 <= ny && ny <= col) )

using namespace std;

const int fx[] = { +1, -1, +0, +0 };
const int fy[] = { +0, +0, +1, -1 };
const int MAXN = 1000;
const int INF = (1 << 31) - 1;

int graph[MAXN+2][MAXN+2];
int d[MAXN+2][MAXN+2];

struct data {
    int x, y, cst;
    bool operator < (const data& t) const {
        return (cst > t.cst);
    }
} ;

int dijkstra( int N, int M ) {
    data now, next;
    priority_queue < data > q;

    for( int i = 0 ; i <= MAXN ; ++i ) {
        for( int j = 0 ; j <= MAXN ; ++j ) {
            d[i][j] = INF;
        }
    }

    d[1][1] = graph[1][1];
    now.x = 1, now.y = 1, now.cst = graph[1][1];
    q.push( now );
    while( !q.empty() ) {
        now = q.top();
        q.pop();

        if( now.x == N && now.y == M ) return d[N][M];

        for( int i = 0 ; i < 4 ; ++i ) {
            next.x = now.x + fx[i];
            next.y = now.y + fy[i];

            if( isValid( next.x, next.y, N, M ) && ( d[next.x][next.y] > graph[next.x][next.y] + d[now.x][now.y] ) ) {
                d[next.x][next.y] = graph[next.x][next.y] + d[now.x][now.y];
                next.cst = d[next.x][next.y];
                q.push( next );
            }
        }
    }
}

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        int N, M;
        scanf( "%d %d", &N, &M );
        for( int i = 1 ; i <= N ; ++i ) {
            for( int j = 1 ; j <= M ; ++j ) {
                scanf( "%d", &graph[i][j] );
            }
        }

        printf("%d\n", dijkstra( N, M ) );
    }
    return 0;
}
