#include <bits/stdc++.h>

using namespace std;

string str;
int counter[8];

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    while( cin >> str ) {
        memset( counter, 0, sizeof counter );

        int SZ = str.size();
        for( int i = 0 ; i < SZ ; ++i ) {
            if( str[i] == 'B' ) ++counter[0];
            else if( str[i] == 'u' ) ++counter[1];
            else if( str[i] == 'l' ) ++counter[2];
            else if( str[i] == 'b' ) ++counter[3];
            else if( str[i] == 'a' ) ++counter[4];
            else if( str[i] == 's' ) ++counter[5];
            else if( str[i] == 'r' ) ++counter[6];
        }

        int ans = 0;
        while( counter[0] && counter[1] && counter[2] && counter[3] &&
               counter[4] && counter[5] && counter[6] ) {
            if( counter[0] >= 1 && counter[1] >= 2 && counter[2] >= 1 && counter[3] >= 1 &&
               counter[4] >= 2 && counter[5] >= 1 && counter[6] >= 1 ) {
               counter[0] -= 1;
               counter[1] -= 2;
               counter[2] -= 1;
               counter[3] -= 1;
               counter[4] -= 2;
               counter[5] -= 1;
               counter[6] -= 1;
               ++ans;
            }
            else break;
        }

        cout << ans << "\n";
    }
    return 0;
}
