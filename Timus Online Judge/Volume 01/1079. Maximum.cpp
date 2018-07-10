#include <bits/stdc++.h>

using namespace std;

const int MAXN = 99999;
int a[MAXN+2];

int main( int argc, char ** argv ) {
    a[0] = 0, a[1] = 1;
    for( int i = 1 ; i <= (MAXN / 2) ; ++i ) {
        a[2*i] = a[i];
        a[(2*i)+1] = a[i] + a[i+1];
    }

    int n;
    while( scanf( "%d", &n )==1 && n ) {
        int Max = -((1<<31)-(1));
        for( int i = 0 ; i <= n ; ++i ) {
            Max = max( Max, a[i] );
        }

        printf( "%d\n", Max );
    }
    return 0;
}