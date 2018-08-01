#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10000;
string direction;
int time_left[MAXN+5];
queue< int > l, r;
int unload_time[MAXN+5];

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c;
    cin >> c;
    for(int nCase = 1; nCase <= c; ++nCase) {
        int n, t, m;
        cin >> n >> t >> m;

        memset(time_left, 0, sizeof(time_left));
        while(!l.empty()) l.pop();
        while(!r.empty()) r.pop();
        for(int i = 0; i < m; ++i) {
            int arrival_time;
            cin >> arrival_time >> direction;

            time_left[i] = arrival_time;
            if(direction == "left") l.push(i);
            else r.push(i);
        }

        memset(unload_time, 0, sizeof(unload_time));
        direction = "left";
        int current_time = 0, wait_time;
        while(!l.empty() || !r.empty()) {
            if(!l.empty() && time_left[l.front()] > 0 && r.empty()) wait_time = time_left[l.front()];
            else if(l.empty() && !r.empty() && time_left[r.front()] > 0) wait_time = time_left[r.front()];
            else if((!l.empty() && time_left[l.front()] > 0) && (!r.empty() && time_left[r.front()] > 0)) wait_time = min(time_left[l.front()], time_left[r.front()]);
            else wait_time = 0;

            current_time += wait_time;
            for(int i = 0; i < m; ++i) time_left[i] -= wait_time;

            int car_counter = 0;
            if(direction == "left") {
                while(car_counter < n && !l.empty() && time_left[l.front()] <= 0) {
                    unload_time[l.front()] = current_time + t;
                    l.pop();
                    ++car_counter;
                }
                direction = "right";
            }
            else {
                while(car_counter < n && !r.empty() && time_left[r.front()] <= 0) {
                    unload_time[r.front()] = current_time + t;
                    r.pop();
                    ++car_counter;
                }
                direction = "left";
            }

            current_time += t;
            for(int i = 0; i < m; ++i) time_left[i] -= t;
        }

        for(int i = 0; i < m; ++i) cout << unload_time[i] << "\n";
        if(nCase != c) cout << "\n";
    }
    return 0;
}
