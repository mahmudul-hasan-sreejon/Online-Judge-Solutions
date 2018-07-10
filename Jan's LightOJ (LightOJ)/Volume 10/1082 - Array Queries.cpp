#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 1e5;
int arr[MAXN+2];
int tree[(MAXN*3)+2];
 
void init( int node, int l, int r ) {
    if( l == r ) {
        tree[node] = arr[l];
        return;
    }
    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (l + r) / 2;
    init( left, l, mid );
    init( right, (mid + 1), r );
    tree[node] = min( tree[left], tree[right] );
}
 
int query( int node, int l, int r, int i, int j ) {
    if( i > r || j < l ) return INT_MAX;
    if( l >= i && r <= j ) return tree[node];
    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (l + r) / 2;
    int min1 = query( left, l, mid, i, j );
    int min2 = query( right, (mid + 1), r, i, j );
    return min( min1, min2 );
}
 
int main( int argc, char ** argv ) {
    int T;
    scanf( "%d", &T );
    for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int N, q;
        scanf( "%d %d", &N, &q );
        for( int i = 1 ; i <= N ; ++i ) scanf( "%d", &arr[i] );
 
        init( 1, 1, N );
 
        printf( "Case %d:\n", nCase );
        while( q-- ) {
            int I, J;
            scanf( "%d %d", &I, &J );
            int minValue = query( 1, 1, N, I, J );
            printf( "%d\n", minValue );
        }
    }
    return 0;
}