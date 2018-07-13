#include <bits/stdc++.h>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int volume, cover, X, Y;
    cin >> volume >> cover >> X >> Y;

    int ans;
    if(X == Y) ans = volume;
    else if(X < Y) ans = ((Y - X) * (2 * cover)) + ((Y - X - 1) * volume);
    else ans = ((X - Y) * (2 * cover)) + ((X - Y - 1) * volume) + (2 * volume);

    cout << ans << "\n";

    return 0;
}
