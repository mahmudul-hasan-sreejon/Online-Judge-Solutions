#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    while( cin >> a >> b >> c >> d >> e && a+b+c+d+e!=0 )
        cout << a*b*c*d*d*e*e << endl;

    return 0;
}
