#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

const char character[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int char_count[30];

int main()
{
    for(int i=0 ; i<30 ; i++) char_count[i] = 0;

    int tc, max_count;

    cin >> tc;
    cin.get();
    while( tc-- )
    {
        char line[1005];
        gets(line);

        max_count = 0;
        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]>='A' && line[i]<='Z' )
            {
                char_count[line[i]-'A']++;
                if( char_count[line[i]-'A']>max_count ) max_count = char_count[line[i]-'A'];
            }

            if( line[i]>='a' && line[i]<='z' )
            {
                char_count[line[i]-'a']++;
                if( char_count[line[i]-'a']>max_count ) max_count = char_count[line[i]-'a'];
            }
        }
    }

    for(int i=max_count ; i>0 ; i--)
        for(int j=0 ; j<26 ; j++)
            if( char_count[j]==i ) cout << character[j] << " " << char_count[j] << endl;

    return 0;
}
