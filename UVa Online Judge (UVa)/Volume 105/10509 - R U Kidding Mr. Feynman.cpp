#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num;

    while( cin >> num && num )
    {
        double a;
        for(int i=1 ; ; i++)
            if( i*i*i>num )
            {
                a = i-1;
                break;
            }

        double dx = (num-(a*a*a))/(3*a*a);

        cout << fixed << setprecision(4) << a+dx << endl;
    }
    return 0;
}
