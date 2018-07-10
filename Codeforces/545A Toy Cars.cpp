#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
int A[MAXN+2][MAXN+2];

vector < int > index;

int main( int argc, char ** argv ) {
    // freopen( "input.txt", "r", stdin );

    int n;
    cin >> n;

    for( int i = 1 ; i <= n ; ++i ) {
        for( int j = 1 ; j <= n ; ++j ) {
            cin >> A[i][j];
        }
    }

    for( int i = 1 ; i <= n ; ++i ) {
        bool flag = true;
        for( int j = 1 ; j <= n ; ++j )
            if( A[i][j] == 1 || A[i][j] == 3 ) flag = false;

        if( flag ) index.push_back( i );
    }

    cout << index.size() << endl;
    if( index.size() ) {
        for( int i = 0 ; i < index.size() ; ++i ) {
            cout << index[i] << " ";
        }
        cout << endl;
    }

    return 0;
}