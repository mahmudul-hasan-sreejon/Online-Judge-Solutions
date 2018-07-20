#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;
int coach[MAXN+5];
stack< int > s;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int N;
    while(scanf("%d", &N) == 1 && N) {
        while(scanf("%d", &coach[0]) == 1 && coach[0]) {
            for(int i = 1; i < N; ++i) scanf("%d", &coach[i]);

            int coach_no = 1, idx = 0;
            while(coach_no <= N) {
                s.push(coach_no);
                while(!s.empty() && (s.top() == coach[idx]) && (idx < N)) {
                    s.pop();
                    ++idx;
                }
                ++coach_no;
            }

            if(s.empty()) puts("Yes");
            else puts("No");

            memset(coach, 0, sizeof(coach));
            while(!s.empty()) s.pop();
        }
        puts("");
    }
    return 0;
}
