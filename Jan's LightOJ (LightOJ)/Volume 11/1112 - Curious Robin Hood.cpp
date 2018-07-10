#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 1e5;
int sack[MAXN+2], tree[MAXN+2];
 
void update( int idx, int value, int n ) {
    while( idx <= n ) {
        tree[idx] += value;
        idx += (idx & (-idx));
    }
}
 
int query( int idx ) {
    int sum = 0;
    while( idx > 0 ) {
        sum += tree[idx];
        idx -= (idx & (-idx));
    }
    return sum;
}
 
int rangeQuery( int l, int r ) {
    int sum = query( r ) - ( (l == 1) ? 0 : query( l - 1 ) );
    return sum;
}
 
int main( int argc, char ** argv ) {
	int T;
	scanf( "%d", &T );
	for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int n, q;
        scanf( "%d %d", &n, &q );
        for( int i = 1 ; i <= n ; ++i ) scanf( "%d", &sack[i] );
 
        for( int i = 1 ; i <= n ; ++i ) tree[i] = 0;
        for( int i = 1 ; i <= n ; ++i ) update( i, sack[i], n );
 
        printf( "Case %d:\n", nCase );
        while( q-- ) {
            int task;
            scanf( "%d", &task );
            switch( task ) {
                int i, j, v;
                case 1:
                    scanf( "%d", &i );
                    printf( "%d\n", sack[i+1] );
                    update( (i + 1), -sack[i+1], n );
                    sack[i+1] = 0;
                    break;
                case 2:
                    scanf( "%d %d", &i, &v );
                    sack[i+1] += v;
                    update( (i + 1), v, n );
                    break;
                case 3:
                    scanf( "%d %d", &i, &j );
                    printf( "%d\n", rangeQuery( (i + 1), (j + 1) ) );
                    break;
            }
        }
	}
	return 0;
}