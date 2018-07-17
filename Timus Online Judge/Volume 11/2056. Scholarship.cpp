#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10;
float m[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, flag = 0;
    cin >> n;
    float avg = 0.0;
    for(int i = 0; i < n; ++i) {
        cin >> m[i];
        if(m[i] == 3.0) flag = 1;
        avg += m[i];
    }
    avg /= (float) n;

    if(flag) cout << "None\n";
    else if(avg == 5.0) cout << "Named\n";
    else if(avg >= 4.5) cout << "High\n";
    else cout << "Common\n";

    return 0;
}
