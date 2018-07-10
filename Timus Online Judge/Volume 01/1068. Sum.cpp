#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    int N;
    scanf( "%d", &N );

    int sum = 0;
    if( N <= 0 ) {
        for( int i = N ; i <= 1 ; ++i ) {
            sum += i;
        }
    }
    else if( N > 0 ) {
        for( int i = 1 ; i <= N ; ++i ) {
            sum += i;
        }
    }

    printf( "%d\n", sum );
    return 0;
}