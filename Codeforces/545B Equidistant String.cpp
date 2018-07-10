#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;
char s[MAXN+2], t[MAXN+2], p[MAXN+2];

int main( int argc, char ** argv ) {
    //freopen( "input2.txt", "r", stdin );

    scanf( "%s", s );
    scanf( "%s", t );

    int n = strlen( s );
    bool flag = false;
    for( int i = 0 ; i < n ; ++i ) {
        if( s[i] == t[i] ) p[i] = s[i];
        else {
            if( flag ) {
                p[i] = t[i];
                flag = false;
            }
            else {
                p[i] = s[i];
                flag = true;
            }
        }
    }

    int c1 = 0, c2 = 0;
    for( int i = 0 ; i < n ; ++i ) {
        if( s[i] != p[i] ) ++c1;
        if( t[i] != p[i] ) ++c2;
    }

    if( c1 != c2 ) puts( "impossible" );
    else puts( p );

    return 0;
}