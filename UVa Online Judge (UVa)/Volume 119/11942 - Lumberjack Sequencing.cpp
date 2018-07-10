#include <cstdio>
#include <iostream>

using namespace std;

int N[12];

int main()
{
    int tc;

    cin >> tc;
    cout << "Lumberjacks:" << endl;
    while( tc-- )
    {
        cin >> N[0];

        bool ascend = false, descend = false;
        for(int i=1 ; i<10 ; i++)
        {
            cin >> N[i];

            if( N[i-1]>N[i] ) descend = true;
            else ascend = true;
        }

        if( ascend && descend ) cout << "Unordered" << endl;
        else cout << "Ordered" << endl;
    }
    return 0;
}
