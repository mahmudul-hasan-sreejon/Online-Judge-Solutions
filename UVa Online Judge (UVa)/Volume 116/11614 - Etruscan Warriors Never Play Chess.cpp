#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        long long n;
        cin >> n;

        long long row = (sqrt(1+8*n)-1)/2;

        cout << row << endl;
    }
    return 0;
}
