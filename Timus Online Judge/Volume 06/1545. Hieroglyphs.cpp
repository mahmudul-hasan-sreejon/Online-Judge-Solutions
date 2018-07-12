#include <bits/stdc++.h>

using namespace std;

vector< string > hieroglyph;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N >> ws;
    for(int i = 1; i <= N; ++i) {
        string input;
        getline(cin, input);

        hieroglyph.push_back(input);
    }
    char letter;
    cin >> letter;

    sort(hieroglyph.begin(), hieroglyph.end());

    int SZ = hieroglyph.size();
    for(int i = 0; i < SZ; ++i) {
        if(hieroglyph[i][0] == letter) cout << hieroglyph[i] << "\n";
    }

    return 0;
}
