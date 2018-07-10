#include <cstdio>
#include <iostream>

using namespace std;

long ancestor[82];

int main()
{
    ancestor[0] = ancestor[1] = 1;
    for(int i=2 ; i<82 ; i++) ancestor[i] = ancestor[i-2]+ancestor[i-1];

    int generation;

    while( cin >> generation && generation )
        cout << ancestor[generation] << endl;

    return 0;
}
