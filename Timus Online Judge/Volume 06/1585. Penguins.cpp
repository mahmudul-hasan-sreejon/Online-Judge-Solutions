#include <bits/stdc++.h>

using namespace std;

map< string, int > m;

string most_numerous(int a, int b, int c) {
    if(a >= b && a >= c) return "Emperor Penguin";
    if(b >= a && b >= c) return "Little Penguin";
    if(c >= a && c >= b) return "Macaroni Penguin";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n >> ws;
    for(int i = 1; i <= n; ++i) {
        string input;
        getline(cin, input);

        m[input]++;
    }

    string ans = most_numerous(m["Emperor Penguin"], m["Little Penguin"], m["Macaroni Penguin"]);
    cout << ans << "\n";

    return 0;
}
