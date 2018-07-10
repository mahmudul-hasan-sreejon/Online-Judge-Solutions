#include <bits/stdc++.h>

using namespace std;

string name;
map< string, int > m;
vector< pair< int, string > > ans;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N >> ws;
    while(getline(cin, name)) m[name]++;

    map< string, int >::iterator it;
    for(it = m.begin(); it != m.end(); ++it)
        if(it->second >= 2) ans.push_back(make_pair(it->second, it->first));

    sort(ans.begin(), ans.end());

    int SZ = ans.size();
    for(int i = 0; i < SZ; ++i) cout << ans[i].second << "\n";

    return 0;
}
