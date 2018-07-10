#include <bits/stdc++.h>

using namespace std;

const int MAXN = 45;
const int RED = 0;
const int WHITE = 1;
const int BLUE = 2;

typedef long long ll;
ll dp[MAXN+5][3];

ll rec(int len, int color) {
    if(len <= 0) return 0;
    if(len == 1) {
        if(color == BLUE) return 0;
        else return 1;
    }
    if(dp[len][color] != -1) return dp[len][color];

    if(color == BLUE) dp[len][color] = rec((len - 1), RED) + rec((len - 1), WHITE);
    else if(color == RED) dp[len][color] = rec((len - 1), WHITE) + rec((len - 2), WHITE);
    else if(color == WHITE) dp[len][color] = rec((len - 1), RED) + rec((len - 2), RED);

    return dp[len][color];
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    memset(dp, -1, sizeof(dp));
    ll ans = rec(N, RED) + rec(N, WHITE);

    cout << ans;

    return 0;
}
