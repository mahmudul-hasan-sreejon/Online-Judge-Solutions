#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAXN = 1e5;

struct info {
    ll prop, sum;
} tree[MAXN*3];

void init( int node, int left, int right ) {
    if( left > right ) return;
    if( left == right ) {
        tree[node].sum = 0;
        return;
    }
    int child1 = node << 1, child2 = (node << 1) + 1, mid = (left + right) >> 1;
    init( child1, left, mid );
    init( child2, (mid + 1), right );
    tree[node].sum = tree[child1].sum + tree[child2].sum;
}

void update( int node, int left, int right, int I, int J, ll value ) {
    if( left > right || I > right || J < left ) return;
    if( left >= I && right <= J ) {
        tree[node].sum += ((right - left + 1) * value);
        tree[node].prop += value;
        return;
    }
    int child1 = node << 1, child2 = (node << 1) + 1, mid = (left + right) >> 1;
    update( child1, left, mid, I, J, value );
    update( child2, (mid + 1), right, I, J, value );
    tree[node].sum = tree[child1].sum + tree[child2].sum + (right - left + 1) * tree[node].prop;
}

ll query( int node, int left, int right, int I, int J, ll carry = 0 ) {
    if( left > right || I > right || J < left ) return 0;
    if( left >= I && right <= J ) return tree[node].sum + carry * (right - left + 1);
    int child1 = node << 1, child2 = (node << 1) + 1, mid = (left + right) >> 1;
    ll p1 = query( child1, left, mid, I, J, (carry + tree[node].prop) );
    ll p2 = query( child2, (mid + 1), right, I, J, (carry + tree[node].prop) );
    return (p1 + p2);
}

int main( int argc, char ** argv ) {
//    freopen( "in.txt", "r", stdin );
//    freopen( "out.txt", "w", stdout );

    int T;
	scanf( "%d", &T );
	for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        int N, C;
        scanf( "%d %d", &N, &C );

        memset( tree, 0, sizeof( tree ) );
        init( 1, 1, N );

        while( C-- ) {
            int cmd, p, q;
            scanf( "%d %d %d", &cmd, &p, &q );
            switch( cmd ) {
                case 0:
                    ll v;
                    scanf( "%lld", &v );
                    update( 1, 1, N, p, q, v );
                    break;
                case 1:
                    ll ans = query( 1, 1, N, p, q );
                    printf( "%lld\n", ans );
                    break;
            }
        }
	}
	return 0;
}
