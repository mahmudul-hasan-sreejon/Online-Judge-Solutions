#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;
int voter[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    cin >> k;
    for(int i = 0; i < k; ++i) {
        cin >> voter[i];
    }

    sort(voter, voter + k);

    int limit = k / 2, res = 0;
    for(int i = 0; i <= limit; ++i) {
        res += ((voter[i] / 2) + 1);
    }

    cout << res << "\n";

    return 0;
}
