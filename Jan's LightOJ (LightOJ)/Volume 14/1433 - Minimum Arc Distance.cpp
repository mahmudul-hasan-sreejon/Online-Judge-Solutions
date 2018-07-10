#include <bits/stdc++.h>

using namespace std;

double dis(double AX, double AY, double BX, double BY) {
    double res = sqrt((AX - BX) * (AX - BX) + (AY - BY) * (AY - BY));
    return res;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int T;
    cin >> T;
    for(int nCase = 1; nCase <= T; ++nCase) {
        double OX, OY, AX, AY, BX, BY;
        cin >> OX >> OY >> AX >> AY >> BX >> BY;

        double r = dis(OX, OY, AX, AY);
        double c = dis(AX, AY, BX, BY);
        double a = acos(((2 * r * r) - (c * c)) / (2 * r * r));

        cout << "Case " << nCase << ": " << setprecision(9) << (a * r) << "\n";
    }
    return 0;
}
