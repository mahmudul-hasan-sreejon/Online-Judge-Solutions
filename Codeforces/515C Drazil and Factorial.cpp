#include <bits/stdc++.h>

using namespace std;

string num[10] = { "", "", "2", "3", "322", "5", "53", "7", "7222", "7332" };
string a, x;

int main( int argc, char ** argv ) {
    #ifndef ONLINE_JUDGE
        freopen( "in.txt", "r", stdin );
        freopen( "out.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cout.tie( NULL );
    cin.tie( NULL );

    int n;
    while( cin >> n ) {
        cin >> a;

        for( int i = 0 ; i < n ; ++i ) {
            x += num[a[i] - '0'];
        }

        sort( x.begin(), x.end(), greater<>() );

        cout << x << "\n";

        a.clear(), x.clear();
    }
    return 0;
}
