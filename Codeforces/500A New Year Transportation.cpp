#include <bits/stdc++.h>

using namespace std;

const int MAX = 30002;
int a[MAX];

int main( int argc, char ** argv ) {
    int n, t;
    scanf( "%d %d", &n, &t );
    for( int i = 1 ; i <= (n-1) ; i++ ) {
        scanf( "%d", &a[i] );
    }

    int pos = 1;
    bool flag = false;
    while( pos < n && pos <= t ) {
        pos += a[pos];
        if( pos == t ) {
            flag = true;
            break;
        }
    }

    if( flag ) {
        puts("YES");
    }
    else {
        puts("NO");
    }

    return 0;
}