#include <cstdio>
#include <iostream>

using namespace std;

const int coin[] = {1, 5, 10, 25, 50};
int ways[7495];

int main()
{
    ways[0] = 1;
    for(int i=0 ; i<5 ; i++)
        for(int j=coin[i] ; j<7490 ; j++) ways[j] += ways[j-coin[i]];

    int money;

    while( cin >> money )
        cout << ways[money] << endl;

    return 0;
}
