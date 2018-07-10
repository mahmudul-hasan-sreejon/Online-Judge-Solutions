#include <bits/stdc++.h>

using namespace std;

unordered_map< int, int > m;

int digitSum(int num) {
    int sum = 0;
    while(num != 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
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
    cin >> n;

    int limit = pow(10, (n / 2)) - 1;
    for(int i = 0; i <= limit; ++i) {
        int sum = digitSum(i);
        m[sum]++;
    }

    int counter = 0;
    for(int i = 0; i <= limit; ++i) {
        int sum = digitSum(i);
        counter += m[sum];
    }

    cout << counter;

    return 0;
}
