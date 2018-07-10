#include <bits/stdc++.h>

using namespace std;

bool isVowel( char s ) {
    if( s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ) return true;
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen( "in3.txt", "r", stdin );
        freopen( "out3.txt", "w", stdout );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );

    string s, ans;
    cin >> s;

    int counter = 0, len = s.size();
    for( int i = 0 ; i < len ; ++i ) {
        if( isVowel( s[i] ) ) {
            counter = 0;
            ans += s[i];
        }
        else {
            counter++;
            if( counter == 1 ) {
                int nVowel = 0;
                while( s[i] == s[i+1] ) {
                    ans += s[i];
                    i++;
                    nVowel++;
                }

                ans += s[i];
                if( !isVowel( s[i+1] ) && nVowel ) {
                    ans += " ";
                    counter = 0;
                }
            }
            else if( counter > 1 ) {
                ans += s[i];
                if( !isVowel( s[i+1] ) ) {
                    ans += " ";
                    counter = 0;
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}