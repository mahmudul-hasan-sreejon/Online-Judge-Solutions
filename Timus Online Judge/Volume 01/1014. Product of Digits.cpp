#include <bits/stdc++.h>

using namespace std;

vector <int> Q;

int main( int argc, char ** argv ) {
    int N;
    scanf( "%d", &N );

    if( N == 0 ) puts( "10" );
    else if( N == 1 ) puts( "1" );
    else {
        bool flag = true;
        while( N != 1 && flag ) {
            flag  = false;
            for( int i = 9 ; i >= 2 ; --i )
                if( !(N % i) ) {
                    flag = true;
                    Q.push_back( i );
                    N /= i;
                    break;
                }
        }

        if( flag ) {
            reverse( Q.begin(), Q.end() );
            for( int i = 0 ; i < Q.size() ; ++i ) printf( "%d", Q[i] );
            puts( "" );
        }
        else puts( "-1" );
    }

    return 0;
}