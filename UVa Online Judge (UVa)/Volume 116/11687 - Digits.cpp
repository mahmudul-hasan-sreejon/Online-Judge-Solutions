#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char num[1000002];

    while( cin >> num && strcmp(num, "END") )
    {
        if( strcmp(num, "1")==0 ) printf("1\n");
        else
        {
            int i = 0, pre = 0, len = strlen(num);
            while( len!=pre )
            {
                i++;
                pre = len;

                int temp = 0;
                while( len>0 )
                {
                    len /= 10;
                    temp++;
                }
                len = temp;
            }
            cout << i+1 << endl;
        }
    }
    return 0;
}
