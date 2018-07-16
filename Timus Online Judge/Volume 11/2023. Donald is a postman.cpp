#include <bits/stdc++.h>

using namespace std;

string input;
unordered_map< string, int > m;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in2.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    m["Alice"] = m["Ariel"] = m["Aurora"] = m["Phil"] = m["Peter"] = m["Olaf"] = m["Phoebus"] = m["Ralph"] = m["Robin"] = 1;
    m["Bambi"] = m["Belle"] = m["Bolt"] = m["Mulan"] = m["Mowgli"] = m["Mickey"] = m["Silver"] = m["Simba"] = m["Stitch"] = 2;
    m["Dumbo"] = m["Genie"] = m["Jiminy"] = m["Kuzko"] = m["Kida"] = m["Kenai"] = m["Tarzan"] = m["Tiana"] = m["Winnie"] = 3;

    int n;
    cin >> n >> ws;

    int counter = 0, X = 1;
    for(int i = 1; i <= n; ++i) {
        getline(cin, input);

        int Y = m[input];
        if(X != Y) counter += abs(Y - X);
        X = Y;
    }

    if(counter) cout << counter << "\n";
    else cout << (X - 1) << "\n";

    return 0;
}
