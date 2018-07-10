#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20;
int w[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    int limit = 1 << (n - 1), ans = INT_MAX;
    for(int i = 0; i <= limit - 1; ++i) {
        int pile1 = 0, pile2 = 0, bits = i;
        for(int j = 0; j < n; ++j) {
            if(bits & 1 == 1) {
                pile1 += w[j];
            }
            else {
                pile2 += w[j];
            }
            bits = bits >> 1;
        }
        ans = min(ans, abs(pile1 - pile2));
    }

    cout << ans << "\n";

    return 0;
}
