#include <bits/stdc++.h>

#define isValid( nx, ny ) ( (nx >= 0 && nx < n) && (ny >= 0 && ny < m) )

using namespace std;

const int fx[] = { +0, +0, +1, -1, -1, +1, -1, +1 };
const int fy[] = { -1, +1, +0, +0, +1, +1, -1, -1 };

const int MAXN = 99;
vector <string> grid;
bool visited[MAXN+2][MAXN+2];
string input;
int n, m, counter;

void dfs( int x, int y ) {
    visited[x][y] = true;
    ++counter;

    for( int i = 0 ; i < 8 ; ++i ) {
        int X = x + fx[i];
        int Y = y + fy[i];
        if( isValid( X, Y ) && grid[X][Y] == 'W' && !visited[X][Y] ) dfs( X, Y );
    }
}

int main( int argc, char ** argv ) {
    int tc;
    scanf( "%d ", &tc );
    for( int nCase = 1 ; nCase <= tc ; ++nCase ) {
        grid.clear();
        memset( visited, false, sizeof( visited ) );
        while( getline( cin, input ) && ( input[0] == 'W' || input[0] == 'L' ) ) grid.push_back( input );

        n = grid.size(), m = grid[0].size();
        int r, c;
        istringstream in( input );
        in >> r >> c;
        counter = 0;
        dfs( (r - 1), (c - 1) );

        if( nCase > 1 ) puts( "" );
        printf( "%d\n", counter );
        while( getline( cin, input ) && !input.empty() ) {
            istringstream in( input );
            in >> r >> c;
            memset( visited, false, sizeof( visited ) );
            counter = 0;
            dfs( (r - 1), (c - 1) );

            printf( "%d\n", counter );
        }
    }
    return 0;
}