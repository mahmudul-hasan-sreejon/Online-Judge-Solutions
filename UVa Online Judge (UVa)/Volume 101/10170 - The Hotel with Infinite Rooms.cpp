#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long S, D;

    while( cin >> S >> D )
    {
        long group = S, sum = 0;
        while( true )
        {
            sum += group;
            if( sum>=D )
            {
                cout << group << endl;
                break;
            }
            group++;
        }
    }
    return 0;
}
