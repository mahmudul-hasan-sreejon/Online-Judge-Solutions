#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int x, y;
        cin >> x >> y;

        int len = y-x, min_steps = 0;
        if( len!=0 )
        {
            int sum = 0, temp = 2;
            while( len>sum )
            {
                sum += temp/2;
                temp++;
                min_steps++;
            }
        }

        cout << min_steps << endl;
    }
    return 0;
}
