#include <bits/stdc++.h>

using namespace std;

long long n;
char k[22];
vector < long long > v;

int main( int argc, char ** argv ) {
    scanf( "%lld %s", &n, k );

    long long lenK = strlen( k );
    for( long long i = n ;  i > 1  ; i-=lenK ) {
        v.push_back( i );
    }

    long long ans = 1;
    for( int i = 0 ;  i < v.size()  ; ++i ) {
        ans *= v[i];
    }

    printf( "%lld\n", ans );
    return 0;
}