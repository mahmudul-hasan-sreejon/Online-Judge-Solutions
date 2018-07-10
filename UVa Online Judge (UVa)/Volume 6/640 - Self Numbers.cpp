#include <cstdio>
#include <iostream>

using namespace std;

bool check[1000005];

int main()
{
    for(int i=0 ; i<1000005 ; i++) check[i] = true;

    for(int i=1 ; i<=1000000 ; i++)
    {
        int generator = i, sum = i;
        while( generator!=0 )
        {
            sum += generator%10;
            generator /= 10;
        }

        if( sum<=1000000 ) check[sum] = false;
    }

    for(int i=1 ; i<=1000000 ; i++)
        if( check[i] ) cout << i << endl;

    return 0;
}
