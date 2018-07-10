#include <bits/stdc++.h>

using namespace std;

const int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2 };
const int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1 };
char str[4];

int main( int argc, char ** argv ) {
    int N;
    scanf( "%d ", &N );
    while( N-- ) {
        scanf( "%s", str );
        int x = str[0] - 'a' + 1;
        int y = str[1] - '1' + 1;

        int counter = 0;
        for( int i = 0 ; i < 8 ; ++i ) {
            int X = x + dx[i];
            int Y = y + dy[i];
            if( ( X >= 1 && X <= 8 ) && ( Y >= 1 && Y <=8 ) ) ++counter;
        }

        printf( "%d\n", counter );
    }
    return 0;
}