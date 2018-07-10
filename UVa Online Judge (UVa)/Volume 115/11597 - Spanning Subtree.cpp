#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, ncase = 0;

    while( cin >> n && n )
        cout << "Case " << ++ncase << ": " << n/2 << endl;

    return 0;
}
