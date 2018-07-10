#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200;
const int GRAY = -1;
const int WHITE = 0;
const int BLACK = 1;
vector <int> v[MAXN+2];
int color[MAXN+2];

bool dfs( int node, int c ) {
    if( color[node] == (1 - c) ) {
        return false;
    }
    if( color[node] == c ) {
        return true;
    }
    color[node] = c;
    bool ret = true;
    for( int i = 0 ; (i < v[node].size()) && ret ; ++i ) {
        int now = v[node][i];
        ret &= dfs( now, (1 - c) );
    }
    return ret;
}

int main( int argc, char ** argv ) {
    int n, e;
    while( scanf( "%d", &n ) == 1 && n ) {
        scanf( "%d", &e );
        for( int i = 1 ; i <= e ; ++i ) {
            int x, y;
            scanf( "%d %d", &x, &y );
            v[x].push_back( y );
            v[y].push_back( x );
        }

        memset( color, GRAY, sizeof( color ) );
        bool flag = dfs( 0, WHITE );
        if( flag ) {
            puts( "BICOLORABLE." );
        }
        else {
            puts( "NOT BICOLORABLE." );
        }

        for( int i = 0 ; i < n ; ++i ) {
            v[i].clear();
        }
    }
    return 0;
}
