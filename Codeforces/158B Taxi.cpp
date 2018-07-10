#include <bits/stdc++.h>

using namespace std;

int s[100002];

int main( int argc, char ** argv ) {
    memset( s, 0, sizeof( s ) );

    int n;
    scanf( "%d", &n );
    for( int i = 1 ; i <= n ; ++i ) {
        int temp;
        scanf( "%d", &temp );
        ++s[temp];
    }

    int taxi = s[4];
    taxi += s[3];
    s[1] -= s[3];
    taxi += (s[2] / 2);
    if( s[2]&1 ) {
        ++taxi;
        s[1] -= 2;
    }
    if( s[1] > 0 ) {
        taxi += (s[1] / 4);
        if( s[1]&3 ) {
            ++taxi;
        }
    }

    printf( "%d\n", taxi );
    return 0;
}