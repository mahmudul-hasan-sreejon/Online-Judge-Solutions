#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5;
bool flag[MAXN+5];
int prime[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(flag, true, sizeof(flag));
    flag[0] = flag[1] = false;

    int idx = 0;
    for(int i = 2; i <= MAXN; ++i) {
        if( flag[i] ) {
            prime[++idx] = i;
            for(int j = i + i; j < MAXN; j += i) {
                flag[j] = false;
            }
        }
        if(idx == 15000) {
            break;
        }
    }

    int k;
    cin >> k;
    for(int nCase = 1; nCase <= k; ++nCase) {
        int n;
        cin >> n;

        cout << prime[n] << "\n";
    }
    return 0;
}
