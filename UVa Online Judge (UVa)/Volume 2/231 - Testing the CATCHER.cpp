#include <bits/stdc++.h>
 
using namespace std;
 
const int MAXN = 32767;
vector <int> sequence;
int dp[MAXN+2];
 
int main( int argc, char ** argv ) {
    int nCase = 0, height;
    while( cin >> height && height != -1 ) {
        sequence.push_back( height );
        while( cin >> height && height != -1 ) sequence.push_back( height );
 
        for( int i = 0 ; i < sequence.size() ; ++i ) dp[i] = 1;
 
        int missile = 0;
        for( int i = 0 ; i < sequence.size() ; ++i )
            for( int j = i + 1 ; j < sequence.size() ; ++j )
                if( (sequence[j] < sequence[i]) && (dp[j] < (dp[i] + 1)) ) {
                    dp[j] = dp[i] + 1;
                    missile = max( missile, dp[j] );
                }
 
        if( nCase ) puts( "" );
        printf( "Test #%d:\n", ++nCase );
        printf( "  maximum possible interceptions: %d\n", missile );
 
        sequence.clear();
    }
    return 0;
}