#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);
vector< pair< double, double > > points;

double dist(pair< double, double > p1, pair< double, double > p2) {
    double x = p1.first - p2.first;
    double y = p1.second - p2.second;
    double d = sqrt((x * x) + (y * y));
    return d;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    points.clear();

    int N;
    double R;
    cin >> N >> R;
    for(int i = 0; i < N; ++i) {
        double x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    double len = 0.0;
    for(int i = 1; i < N; ++i) {
        len += dist(points[i-1], points[i]);
    }
    len += dist(points[N-1], points[0]);
    len += 2.0 * PI * R;

    cout << setprecision(2) << fixed << len << "\n";

    return 0;
}
