#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int n;
    scanf( "%d", &n );

    if( n == 1 || n == 2 ) {
        printf("1\n1\n");
        return 0;
    }
    else if( n == 3 ) {
        printf("2\n1 3\n");
        return 0;
    }
    else if( n == 4 ) {
        printf("4\n2 4 1 3\n");
        return 0;
    }
    else {
        vector <int> v;
        for( int i = 1 ; i <= n ; i += 2 ) {
            v.push_back( i );
        }
        for( int i = 2 ; i <= n ; i += 2 ) {
            v.push_back( i );
        }

        printf( "%d\n%d", n, v[0] );
        for( int i = 1 ; i < v.size() ; i++ ) {
            printf( " %d", v[i] );
        }
        printf( "\n" );
    }
    return 0;
}