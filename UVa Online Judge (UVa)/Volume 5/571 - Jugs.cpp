#include <bits/stdc++.h>

using namespace std;

int Ca, Cb, N;

void dfs( int A, int B ) {
    if( B == N ) {
        puts( "success" );
        return;
    }
    if( !A ) {
        puts( "fill A" );
        A = Ca;
    }
    if( B == Cb ) {
        puts( "empty B" );
        B = 0;
    }
    puts( "pour A B" );

    B += A;
    if( B > Cb ) {
        A = B - Cb;
        B = Cb;
    }
    else A = 0;

    dfs( A, B );
}

int main( int argc, char ** argv ) {
    while( scanf( "%d %d %d", &Ca, &Cb, &N) != EOF ) dfs( 0, 0 );

    return 0;
}
