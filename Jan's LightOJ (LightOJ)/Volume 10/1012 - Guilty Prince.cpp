#include <cstdio>
#include <cstring>
 
#define isValid( nx, ny, row, col ) ( (0 <= nx && nx < row) && (0 <= ny && ny < col) )
 
using namespace std;
 
const int dx[] = { -1, +0, +0, +1 };
const int dy[] = { +0, -1, +1, +0 };
 
const int MAXN = 20;
char grid[MAXN+3][MAXN+3];
bool visited[MAXN+3][MAXN+3];
int W, H, counter;
 
void dfs( int x, int y ) {
    if( visited[x][y] ) return;
    visited[x][y] = true;
 
    ++counter;
    for( int i = 0 ; i < 4 ; ++i ) {
        int X = x + dx[i];
        int Y = y + dy[i];
        if( isValid( X, Y, H, W ) && grid[X][Y] == '.' ) dfs( X, Y );
    }
}
 
int main( int argc, char ** argv ) {
    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        scanf( "%d %d", &W, &H );
 
        memset( visited, false, sizeof( visited ) );
        int sourceX, sourceY;
        for( int i = 0 ; i < H ; ++i ) {
            scanf( "%s", grid[i] );
 
            for( int j = 0 ; j < W ; ++j ) {
                if( grid[i][j] == '@' ) sourceX = i, sourceY = j;
                if( grid[i][j] == '#' ) visited[i][j] = true;
            }
        }
 
        counter = 0;
        dfs( sourceX, sourceY );
 
        printf( "Case %d: %d\n", nCase, counter );
    }
    return 0;
}