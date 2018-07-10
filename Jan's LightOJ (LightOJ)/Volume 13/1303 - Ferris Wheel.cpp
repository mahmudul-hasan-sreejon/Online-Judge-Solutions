#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20;
deque< pair<int, bool> > q;
bool visited[MAXN+5][MAXN+5];
int FW[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    for(int nCase = 1; nCase <= T; ++nCase) {
        int n, m;
        cin >> n >> m;

        q.clear();
        for(int i = 1; i <= n; ++i) {
            q.push_back(make_pair(i, true));
        }
        memset(visited, false, sizeof(visited));
        memset(FW, -1, sizeof(FW));

        int seat = 1, time = 0, total = n * m;
        while(true) {
            if(FW[seat] != -1) {
                visited[FW[seat]][seat] = true;
                q.push_back(make_pair(FW[seat], true));
                FW[seat] = -1;
                --total;
            }

            for(int i = 0; i < q.size(); ++i) {
                if(q[i].second && visited[q[i].first][seat] == false) {
                    q[i].second = false;
                    FW[seat] = q[i].first;
                    break;
                }
            }

            while(q.size() && q.front().second == false) {
                q.pop_front();
            }

            seat = (++seat) % m;
            time += 5;
            if(total == 0) {
                break;
            }
        }

        cout << "Case " << nCase << ": " << time << "\n";
    }
    return 0;
}
