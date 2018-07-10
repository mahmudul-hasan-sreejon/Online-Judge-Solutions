#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
int pixels[MAXN+5][MAXN+5];

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

    memset(pixels, 0, sizeof(pixels));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> pixels[i][j];
        }
    }

    for(int i = 0 ; i < N; ++i) {
        int r = i, c = 0;
        while((r >= 0) && (c < N)) {
            cout << pixels[r--][c++] << " ";
        }
    }

    for(int i = 1; i < N; ++i) {
        int r = N - 1, c = i;
        while((r >= 1) && (c < N)) {
            cout << pixels[r--][c++] << " ";
        }
    }

    return 0;
}
