#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[100000], str2[100000];

    while( cin >> str1 >> str2 )
    {
        int index = 0;
        for(int i=0 ; i<strlen(str2) ; i++)
            if( str2[i]==str1[index] )
                index++;

        if( str1[index]==0 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
