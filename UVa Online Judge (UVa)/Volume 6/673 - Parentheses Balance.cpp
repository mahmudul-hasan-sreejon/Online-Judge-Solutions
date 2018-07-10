#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int p_calc[503];

int main()
{
    int tc;

    cin >> tc;
    cin.get();
    while( tc-- )
    {
        for(int i=0 ; i<503 ; i++) p_calc[i] = 0;

        char line[1005];
        gets(line);

        bool flag = true;
        int pos = 0;
        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]=='(' )
            {
                p_calc[pos] = 1;
                pos++;
            }

            if( line[i]==')' )
            {
                if( pos-1>=0 )
                {
                    if( p_calc[pos-1]==1 )
                    {
                        p_calc[pos-1] = 0;
                        pos--;
                    }
                }
                else
                {
                    flag = false;
                    break;
                }
            }

            if( line[i]=='[' )
            {
                p_calc[pos] = 3;
                pos++;
            }

            if( line[i]==']' )
            {
                if( pos-1>=0 )
                {
                    if( p_calc[pos-1]==3 )
                    {
                        p_calc[pos-1] = 0;
                        pos--;
                    }
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if( flag && p_calc[0]==0 ) cout << "Yes" << endl;
        else  cout << "No" << endl;
    }
    return 0;
}
