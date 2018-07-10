#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int f;
        cin >> f;

        int sum = 0;
        while( f-- )
        {
            int a, b, c;
            cin >> a >> b >> c;
            sum += (a*c);
        }

        cout << sum << endl;
    }
    return 0;
}
