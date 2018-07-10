#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 1e5;
char bin[MAXN+5], form[3];
 
struct info {
    int prop, sum;
} tree[MAXN*3];
 
void init( int node, int left, int right ) {
    if( left > right ) return;
    if( left == right ) {
        tree[node].sum = bin[left] - '0';
        return;
    }
    int child1 = node << 1;
    int child2 = (node << 1) + 1;
    int mid = (left + right) >> 1;
    init( child1, left, mid );
    init( child2, (mid + 1), right );
    tree[node].sum = tree[child1].sum + tree[child2].sum;
}
 
void update( int node, int left, int right, int I, int J, int value ) {
    if( left > right || I > right || J < left ) return;
    if( left >= I && right <= J ) {
        tree[node].sum += ((right - left + 1) * value);
        tree[node].prop += value;
        return;
    }
    int child1 = node << 1;
    int child2 = (node << 1) + 1;
    int mid = (left + right) >> 1;
    update( child1, left, mid, I, J, value );
    update( child2, (mid + 1), right, I, J, value );
    tree[node].sum = tree[child1].sum + tree[child2].sum + (right - left + 1) * tree[node].prop;
}
 
int query( int node, int left, int right, int I, int J, int carry = 0 ) {
    if( left > right || I > right || J < left ) return 0;
    if( left >= I && right <= J ) return tree[node].sum + carry * (right - left + 1);
    int child1 = node << 1;
    int child2 = (node << 1) + 1;
    int mid = (left + right) >> 1;
    int p1 = query( child1, left, mid, I, J, (carry + tree[node].prop) );
    int p2 = query( child2, (mid + 1), right, I, J, (carry + tree[node].prop) );
    return (p1 + p2);
}
 
int main( int argc, char ** argv ) {
	int T;
	scanf( "%d", &T );
	for( int nCase = 1 ; nCase <= T ; ++nCase ) {
        scanf( "%s", bin );
        int n = strlen( bin ), q;
        scanf( "%d", &q );
 
        memset( tree, 0, sizeof( tree ) );
        init( 1, 0, (n - 1) );
 
        printf( "Case %d:\n", nCase );
        while( q-- ) {
            scanf( "%s", form );
            switch( form[0] ) {
                int i, j;
                case 'I':
                    scanf( "%d %d", &i, &j );
                    update( 1, 0, (n - 1), (i - 1), (j - 1), 1 );
                    break;
                case 'Q':
                    scanf( "%d", &i );
                    int ans = query( 1, 0, (n - 1), (i - 1), (i - 1) );
                    printf( "%d\n", (ans & 1) );
                    break;
            }
        }
	}
	return 0;
}