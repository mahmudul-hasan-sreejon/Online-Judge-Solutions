#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char line_1[105], line_2[105];

    while( cin >> line_1 >> line_2 )
    {
        int letter_1[26], letter_2[26];
        for(int i=0 ; i<26 ; i++) letter_1[i] = letter_2[i] = 0;

        for(int i=0 ; i<strlen(line_1) ; i++)
        {
            letter_1[line_1[i]-'A']++;
            letter_2[line_2[i]-'A']++;
        }

        sort(letter_1, letter_1+26);
        sort(letter_2, letter_2+26);

        bool flag = true;
        for(int i=0 ; i<26 ; i++)
            if( letter_1[i]!=letter_2[i] )
            {
                flag = false;
                break;
            }

        if( flag ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
