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

    int a, b;
    cin >> a >> b;

    if(!(a & 1) || (b & 1)) cout << "yes" << "\n";
    else cout << "no" << "\n";

    return 0;
}
