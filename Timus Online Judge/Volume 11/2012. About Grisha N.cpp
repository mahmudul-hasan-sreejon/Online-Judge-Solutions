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

    int f;
    cin >> f;

    int minute = (12 - f) * 45;
    if(minute <= 240) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
