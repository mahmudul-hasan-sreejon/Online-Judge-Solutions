#include <bits/stdc++.h>

using namespace std;

int a[4], b[4];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 1; i <= 3; ++i) cin >> a[i] >> b[i];

    int p2 = a[2] - a[1];
    int p1 = a[2] - a[3] - p2;

    cout << p1 << " " << p2 << "\n";

    return 0;
}
