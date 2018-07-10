#include <cstdio>
#include <iostream>

using namespace std;

int carmichael_number[15] = {561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};

int main()
{
    int n;

    while( cin >> n && n )
    {
        bool flag = false;
        for(int i=0 ; i<15 ; i++)
            if( n==carmichael_number[i] )
                flag = true;

        if( flag ) cout << "The number " << n << " is a Carmichael number." << endl;
        else cout << n << " is normal." << endl;
    }
    return 0;
}
