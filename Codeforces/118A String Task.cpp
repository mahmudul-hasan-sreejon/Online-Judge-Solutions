#include <bits/stdc++.h>

using namespace std;

char str[102];

int main( int argc, char ** argv ) {
    scanf( "%s", str );
    int len = strlen( str );
    for( int i = 0 ; i < len ; i++ ) {
        if( str[i] >= 'A' && str[i] <='Z' ) {
            str[i] = 'a' + (str[i] - 'A');
        }
    }

    for( int i = 0 ; i < len ; i++ ) {
        if( str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i' ) {
            printf( ".%c", str[i] );
        }
    }
    printf( "\n" );
    return 0;
}