#include <cstdio>
#include <iostream>

using namespace std;

bool prime[1000005];

int main()
{
    prime[0] = prime[1] = false;
    for(int i=2 ; i<1000005 ; i++) prime[i] = true;

    for(int i=2 ; i*i<1000005 ; i++)
        if( prime[i] )
            for(int j=i+i ; j<1000005 ; j+=i) prime[j] = false;

    int n;

    while( cin >> n && n )
    {
        bool flag = true;
        for(int i=2 ; i<=n ; i++)
            if( prime[i] && prime[n-i] )
            {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = false;
                break;
            }

        if( flag ) cout << "Goldbach's conjecture is wrong." << endl;
    }
    return 0;
}
