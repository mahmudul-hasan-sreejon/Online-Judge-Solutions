#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int n;
        double a0, an;
        cin >> n >> a0 >> an;

        double sum = 0.0;
        for(int i=0 ; i<n ; i++)
        {
            double ci;
            cin >> ci;

            sum += (n-i)*ci;
        }

        cout << fixed << setprecision(2) << (an+(n*a0)-(2*sum))/(n+1) << endl;

        if( tc ) cout << endl;
    }
    return 0;
}
