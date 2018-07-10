#include <bits/stdc++.h>

using namespace std;

char word[102];

int main( int argc, char ** argv ) {
    int n;
    scanf( "%d", &n );
    for( int i = 0 ; i < n ; i++ ) {
        scanf( "%s", word );

        int len = strlen( word );
        if( len > 10 ) {
            printf( "%c%d%c\n", word[0], (len-2), word[len-1] );
        }
        else {
            printf( "%s\n", word );
        }
    }
    return 0;
}