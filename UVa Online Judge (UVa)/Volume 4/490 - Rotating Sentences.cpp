#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

char sentence[105][105];

int main()
{
    int line = 0, len = 0;
    while( gets(sentence[line]) )
    {
        if( len<strlen(sentence[line]) ) len = strlen(sentence[line]);
        line++;
    }

    for(int i=0 ; i<len ; i++)
    {
        for(int j=line-1 ; j>=0 ; j--)
        {
            if( i>=strlen(sentence[j]) ) cout << " ";
            else cout << sentence[j][i];
        }
        cout << endl;
    }

    return 0;
}
