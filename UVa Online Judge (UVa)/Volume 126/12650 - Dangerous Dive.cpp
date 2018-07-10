#include <cstdio>
#include <iostream>

using namespace std;

bool volunteer[10005];

int main()
{
    int N, R;

    while( cin >> N >> R )
    {
        for(int i=0 ; i<10005 ; i++)
            volunteer[i] = false;

        int temp;
        for(int i=0 ; i<R ; i++)
        {
            cin >> temp;
            volunteer[temp] = true;
        }

        bool flag = true;
        for(int i=1 ; i<=N ; i++)
            if( volunteer[i]==false )
            {
                cout << i << " ";
                flag = false;
            }

        if( flag ) cout << "*";
        cout << endl;
    }
    return 0;
}
