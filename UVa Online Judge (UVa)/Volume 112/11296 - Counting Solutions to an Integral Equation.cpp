#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long n;

    while( cin >> n )
        cout << (n/2+2)*(n/2+1)/2 << endl;

    return 0;
}
