#include <bits/stdc++.h>

using namespace std;

map< string, bool > m;

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

    int counter = 0;
    for(int i = 1; i <= N; ++i) {
        string input;
        getline(cin, input);

        if(m[input]) counter++;
        else m[input] = true;
    }

    cout << counter << "\n";

    return 0;
}
