#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, a;

    while( cin >> N >> a && N+a!=0 )
    {
        int M = 0;
        for(int i=1 ; i<=N ; i++)
        {
            double x, y;
            cin >> x >> y;

            bool flag = true;
            if( (x-0)*(x-0)+(y-0)*(y-0)>a*a ) flag = false;
            if( (x-a)*(x-a)+(y-a)*(y-a)>a*a ) flag = false;
            if( (x-0)*(x-0)+(y-a)*(y-a)>a*a ) flag = false;
            if( (x-a)*(x-a)+(y-0)*(y-0)>a*a ) flag = false;

            if( flag ) M++;
        }

        cout << fixed << setprecision(5) << (double) M*(a*a)/N << endl;
    }
    return 0;
}
