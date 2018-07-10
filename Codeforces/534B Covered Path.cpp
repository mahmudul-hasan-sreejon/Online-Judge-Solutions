#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv) {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v1, v2, t, d;
    cin >> v1 >> v2;
    cin >> t >> d;

    int l1[t+5], l2[t+5];

    l1[1] = v1;
    for(int i = 2; i <= t; ++i) {
        l1[i] = l1[i-1]+d;
    }

    l2[t] = v2;
    for(int i = t-1; i > 0; --i) {
        l2[i] = l2[i+1]+d;
    }

    int ans = 0;
    for(int i = 1; i <= t; ++i) {
        ans += min(l1[i], l2[i]);
    }

    cout << ans << "\n";

    return 0;
}
