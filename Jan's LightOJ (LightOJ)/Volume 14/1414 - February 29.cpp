#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string input;
char dump;
stringstream ss;

bool is_leap_year(ll year) {
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int T;
    cin >> T;
    cin >> ws;
    for(int nCase = 1; nCase <= T; ++nCase) {
        ll x_dd, x_yy, y_dd, y_yy;
        string x_mm, y_mm;

        ss.clear();
        getline(cin, input);
        ss << input;
        ss >> x_mm >> x_dd >> dump >> x_yy;

        ss.clear();
        getline(cin, input);
        ss << input;
        ss >> y_mm >> y_dd >> dump >> y_yy;

        ll counter = ((y_yy / 4) + (y_yy / 400) - (y_yy / 100)) - ((x_yy / 4) + (x_yy / 400) - (x_yy / 100));
        if(is_leap_year(x_yy) && (x_mm == "January" || x_mm == "February")) {
            ++counter;
        }
        if(is_leap_year(y_yy) && (y_mm == "January" || (y_mm == "February" && y_dd < 29))) {
            --counter;
        }

        cout << "Case " << nCase << ": " << counter << "\n";
    }
    return 0;
}
