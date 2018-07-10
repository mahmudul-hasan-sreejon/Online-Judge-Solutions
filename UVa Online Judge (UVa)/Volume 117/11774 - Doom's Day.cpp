#include <cstdio>
#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if( b==0 ) return a;

    return GCD(b, a%b);
}

int main()
{
    int tc, ncase;

    cin >> tc;
    ncase = 0;
    while( tc-- )
    {
        int m, n;
        cin >> m >> n;

        if( m==n ) cout << "Case " << ++ncase << ": 2" << endl;
        else cout << "Case " << ++ncase << ": " << (m/GCD(m, n)+n/GCD(m, n)) << endl;
    }
    return 0;
}
