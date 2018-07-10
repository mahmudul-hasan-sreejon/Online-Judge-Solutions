#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;

    while( cin >> n )
    {
        unsigned long long p = 1, counter = 0;
        while( p<n )
        {
            if( counter%2==0 ) p *= 9;
            else p *= 2;

            counter++;
        }

        if( counter%2==1 ) cout << "Stan wins." << endl;
        else cout << "Ollie wins." << endl;
    }
    return 0;
}
