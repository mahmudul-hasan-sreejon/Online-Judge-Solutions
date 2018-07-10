#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e4;
int n, tree[MAXN+2];

int pointQuery( int idx ) {
    int sum = 0;
    while( idx > 0 ) {
        sum += tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}

void pointUpdate( int idx, int value ) {
    while( idx <= n ) {
        tree[idx] += value;
        idx += (idx & (-idx));
    }
}

void rangeUpdate( int l, int r, int value ) {
	pointUpdate( l, value );
	pointUpdate( (r + 1), -value );
}

int main( int argc, char ** argv ) {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    int t;
    scanf( "%d", &t );
    for( int nCase = 1 ; nCase <= t ; ++nCase ) {
        int u;
        scanf( "%d %d", &n, &u );

        memset( tree, 0, sizeof( tree ) );

        while( u-- ) {
            int l, r, val;
            scanf( "%d %d %d", &l, &r, &val );

            rangeUpdate( ++l, ++r, val );
        }

        int q;
        scanf( "%d", &q );
        while( q-- ) {
            int idx;
            scanf( "%d", &idx );

            printf( "%d\n", pointQuery( ++idx ) );
        }
    }
    return 0;
}
