#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
int n;
char digit[MAXN + 2], lockCombination[MAXN + 2];

int main( int argc, char ** argv ) {
    scanf( "%d", &n );
    scanf( "%s", digit );
    scanf( "%s", lockCombination );

    int moves = 0;
    for( int i = 0 ; i < n ; ++i ) {
        int temp1 = min( (digit[i] - '0'), (lockCombination[i] - '0') );
        int temp2 = max( (digit[i] - '0'), (lockCombination[i] - '0') );
        if( (temp2 - temp1) > 5 ) {
            moves += (10 - (temp2 - temp1));
        }
        else {
            moves += (temp2 - temp1);
        }
    }

    printf( "%d\n", moves );
    return 0;
}