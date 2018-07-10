#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int letters[55];

int main()
{
    char line[1005];

    while( gets(line) )
    {
        for(int i=0 ; i<55 ; i++) letters[i] = 0;

        for(int i=0 ; i<strlen(line) ; i++)
        {
            if( line[i]>='A' && line[i]<='Z' ) letters[line[i]-'A']++;
            if( line[i]>='a' && line[i]<='z' ) letters[line[i]-'a'+26]++;
        }

        int max_frequency = -1;

        for(int i=0 ; i<55 ; i++) max_frequency = max(max_frequency, letters[i]);

        for(int i=0 ; i<52 ; i++)
        {
            if( letters[i]==max_frequency )
            {
                char temp;
                if( i<26 )
                {
                    temp = 'A'+i;
                    cout << temp;
                }
                else
                {
                    temp = 'a'+i-26;
                    cout << temp;
                }
            }
        }
        cout << " " << max_frequency << endl;
    }
    return 0;
}
