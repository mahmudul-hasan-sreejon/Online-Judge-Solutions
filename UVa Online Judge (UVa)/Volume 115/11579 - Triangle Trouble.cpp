#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double s[100005];

double triangle_area(double a, double b, double c)
{
    if( a+b<c || b+c<a || c+a<b ) return 0.0;
    double s = (a+b+c)/2;
    double area = sqrt( s*(s-a)*(s-b)*(s-c) );
    return area;
}

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int N;
        cin >> N;

        for(int i=0 ; i<N ; i++)
            cin >> s[i];

        sort(s, s+N);

        double area = 0.0;
        for(int i=N-1 ; i>1 ; i--)
            area = max(area, triangle_area(s[i], s[i-1], s[i-2]));

        cout << fixed << setprecision(2) << area << endl;
    }
    return 0;
}
