#include <cstdio>
#include <iostream>

using namespace std;

int handshake[] = {1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796};

int main()
{
    int n;

    bool new_line = false;
    while( cin >> n )
    {
        if( new_line ) cout << endl;
        new_line = true;
        cout << handshake[n] << endl;
    }
    return 0;
}
