#include <bits/stdc++.h>

using namespace std;

int main( int argc, char ** argv ) {
    long long H, L;
    scanf( "%lld %lld", &H, &L );

    long long total = H + L;
    --total;

    printf( "%lld %lld\n", (total - H), (total - L) );

    return 0;
}