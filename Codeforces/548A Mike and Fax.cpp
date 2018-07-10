#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
char s[MAXN+5];
int k;

int main( int argc, char ** argv ) {
    // freopen( "in.txt", "r", stdin );

    scanf( "%s", s );
    scanf( "%d", &k );

    int len = strlen( s ), lpss = (len / k);
    if( len > (lpss * k) ) puts( "NO" );
    else {
        int starti = 0, endi = lpss, counter = 0;
        for( int n = 1 ; n <= k ; ++n ) {
            bool flag = true;
            int mid = ((starti + endi) / 2);
            for( int i = starti, j = endi - 1 ; i < mid ; ++i, --j ) {
                if( s[i] != s[j] ) {
                    flag = false;
                    break;
                }
            }
            if( flag ) ++counter;
            starti = endi, endi += lpss;
        }

        if( k == counter ) puts( "YES" );
        else puts( "NO" );
    }

    return 0;
}