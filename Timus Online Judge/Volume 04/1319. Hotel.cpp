#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
int a[MAXN+5][MAXN+5];

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

    int num = 1;
    for(int i = N - 1; i >= 0; --i) {
        int r = 0, c = i;
        while((r < N) && (c < N)) {
            a[r++][c++] = num++;
        }
    }

    for(int i = 1; i < N; ++i) {
        int r = i, c = 0;
        while((r < N) && (c < N)) {
            a[r++][c++] = num++;
        }
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
