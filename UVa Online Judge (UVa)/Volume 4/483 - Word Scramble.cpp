#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char line[1005];

    while( gets(line) )
    {
        int index = 0;
        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]==' ' )
            {
                for(int j=i-1 ; j>=index ; j--)
                    cout << line[j];
                cout << " ";
                index = i+1;
            }
        }

        for(int j=strlen(line)-1 ; j>=index ; j--)
            cout << line[j];
        cout << endl;
    }
    return 0;
}
