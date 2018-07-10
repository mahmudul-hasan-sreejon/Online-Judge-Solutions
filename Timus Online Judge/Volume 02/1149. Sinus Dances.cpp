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

    int N;
    cin >> N;

    vector< string > An;
    An.push_back("dump");

    for(int i = 1; i <= N; ++i) {
        string temp;
        for(int moves = 1; moves <= i ; ++moves) {
            temp += "sin(";
            temp += to_string(moves);
            if(moves < i) {
                if(moves & 1) {
                    temp += "-";
                }
                else {
                    temp += "+";
                }
            }
            if(moves == i) {
                for(int j = 1; j <=i; ++j) {
                    temp += ")";
                }
            }
        }
        An.push_back(temp);
    }

    int num = N;
    for(int i = 1; i <= N; ++i) {
        if(i == 1) {
            for(int j = 1; j <= (N - 1); ++j) {
                cout << "(";
            }
        }
        cout << An[i];
        cout << "+";
        cout << num;
        --num;
        if(i < N) {
            cout << ")";
        }
    }

    return 0;
}
