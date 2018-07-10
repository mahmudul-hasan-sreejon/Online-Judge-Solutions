#include <cstdio>
#include <iostream>

using namespace std;

long long n[55];

int main()
{
    n[0] = 1, n[1] = 2;
    for(int i=2 ; i<52 ; i++) n[i] = n[i-1]+n[i-2];

    int tc, ncase;

    cin >> tc;
    ncase = 0;
    while( tc-- )
    {
        int num;
        cin >> num;

        cout << "Scenario #" << ++ncase << ":\n" << n[num] << "\n" << endl;
    }
    return 0;
}
