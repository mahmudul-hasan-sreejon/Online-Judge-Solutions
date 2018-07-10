#include <cstdio>
#include <iostream>

using namespace std;

int parties[105];

int main()
{
    int tc;

    cin >> tc;
    while( tc-- )
    {
        int N, P;
        cin >> N >> P;
        for(int i=0 ; i<P ; i++) cin >> parties[i];

        int lost_days = 0;
        for(int i=1 ; i<=N ; i++)
        {
            if( i%7==6 || i%7==0 ) continue;
            else
            {
                bool flag = false;
                for(int j=0 ; j<P ; j++)
                    if( i%parties[j]==0 )
                        flag = true;

                if( flag ) lost_days++;
            }
        }

        cout << lost_days << endl;
    }
    return 0;
}
