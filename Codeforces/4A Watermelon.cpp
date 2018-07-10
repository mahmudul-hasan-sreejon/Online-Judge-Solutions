#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int w;
    scanf( "%d", &w );

    bool flag = false;
    if( w > 2 ) {
        for( int a = 2 ; a <= w ; a += 2 ) {
            int b = w - a;
            if( !(a&1) && !(b&1) ) {
                flag = true;
                break;
            }
        }
    }

    if( flag ) {
        puts( "YES" );
    }
    else {
        puts( "NO" );
    }
    return 0;
}