#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int n, m;
        cin >> n >> m;

        if( (n-1)%(m-1)!=0 ) cout << "cannot do this" << endl;
        else cout << (n-1)/(m-1) << endl;
    }
    return 0;
}
